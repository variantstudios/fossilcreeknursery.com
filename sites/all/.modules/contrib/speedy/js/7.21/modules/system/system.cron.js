(function($){Drupal.behaviors.cronCheck={attach:function(context,settings){if(settings.cronCheck||false){$("body").once("cron-check",function(){if(Math.round((new Date).getTime()/1e3)>settings.cronCheck){$.get(settings.basePath+"system/run-cron-check")}})}}}})(jQuery);

