# -*- encoding: utf-8 -*-
# stub: compass-aurora 3.0.6 ruby lib

Gem::Specification.new do |s|
  s.name = "compass-aurora"
  s.version = "3.0.6"

  s.required_rubygems_version = Gem::Requirement.new(">= 1.2") if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib"]
  s.authors = ["Sam Richard", "Ian Carrico"]
  s.date = "2013-05-12"
  s.description = "Aurora Subthemes!"
  s.email = ["snugug@gmail.com", "ian@iancarrico.com"]
  s.homepage = "http://drupal.org/project/aurora"
  s.rubyforge_project = "compass-aurora"
  s.rubygems_version = "2.2.2"
  s.summary = "The companion gem for the Drupal Aurora base theme."

  s.installed_by_version = "2.2.2" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_runtime_dependency(%q<compass>, [">= 0.12.2"])
      s.add_runtime_dependency(%q<toolkit>, [">= 0.3.0"])
      s.add_runtime_dependency(%q<sassy-buttons>, [">= 0.1.4"])
      s.add_runtime_dependency(%q<compass-normalize>, [">= 1.4.3"])
      s.add_runtime_dependency(%q<bundler>, [">= 1.3.5"])
      s.add_runtime_dependency(%q<css_parser>, [">= 1.3.4"])
    else
      s.add_dependency(%q<compass>, [">= 0.12.2"])
      s.add_dependency(%q<toolkit>, [">= 0.3.0"])
      s.add_dependency(%q<sassy-buttons>, [">= 0.1.4"])
      s.add_dependency(%q<compass-normalize>, [">= 1.4.3"])
      s.add_dependency(%q<bundler>, [">= 1.3.5"])
      s.add_dependency(%q<css_parser>, [">= 1.3.4"])
    end
  else
    s.add_dependency(%q<compass>, [">= 0.12.2"])
    s.add_dependency(%q<toolkit>, [">= 0.3.0"])
    s.add_dependency(%q<sassy-buttons>, [">= 0.1.4"])
    s.add_dependency(%q<compass-normalize>, [">= 1.4.3"])
    s.add_dependency(%q<bundler>, [">= 1.3.5"])
    s.add_dependency(%q<css_parser>, [">= 1.3.4"])
  end
end
