<?php
/**
 * @file
 * search_api_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_api_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function search_api_config_default_search_api_index() {
  $items = array();
  $items['product_filter'] = entity_import('search_api_index', '{
    "name" : "Product Filter",
    "machine_name" : "product_filter",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "is_new" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "field_product_refernce" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "commerce_product" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "commerce_search_api_product_display_filter" : { "status" : 1, "weight" : "-10", "settings" : [  ] },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "product" : "product" } }
        },
        "commerce_search_api_alter_product_status" : { "status" : 0, "weight" : "-9", "settings" : [  ] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [  ] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [  ] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\u000D\\u000Ah2 = 3\\u000D\\u000Ah3 = 2\\u000D\\u000Astrong = 2\\u000D\\u000Ab = 2\\u000D\\u000Aem = 1.5\\u000D\\u000Au = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\u000D\\u000Adid\\u000D\\u000Athe this that those\\u000D\\u000Aetc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\u002Fstrong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0",
    "rdf_mapping" : [  ]
  }');
  return $items;
}
