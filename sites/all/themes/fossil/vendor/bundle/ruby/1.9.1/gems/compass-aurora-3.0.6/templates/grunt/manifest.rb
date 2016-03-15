description "Aurora Grunt Configuration"
no_configuration_file!

# Grunt's for the Boars
file '../shared/Gruntfile.js.erb', :to => 'Gruntfile.js', :erb => true
file '../shared/package.json.erb', :to => 'package.json', :erb => true
file '../shared/jshintrc.txt', :to => '.jshintrc'

help %Q{
  Please contact Sam Richard with questions:

      sam@snug.ug
}

welcome_message %Q{
  Aurora Grunt Configuration.

  See http://snugug.github.io/Aurora/ for full documentation.

  Now run `npm install` to install your Grunt dependencies.

  You can now simply run `grunt watch` to compile your Sass and start LiveReload.
}