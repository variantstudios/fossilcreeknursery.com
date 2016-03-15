# -*- encoding: utf-8 -*-
# stub: toolkit 1.0.0 ruby lib

Gem::Specification.new do |s|
  s.name = "toolkit"
  s.version = "1.0.0"

  s.required_rubygems_version = Gem::Requirement.new(">= 1.2") if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib"]
  s.authors = ["Sam Richard", "Scott Kellum", "Mason Wendell"]
  s.date = "2013-04-10"
  s.description = "Toolkit for Progressive Enhancement and Responsive Web Design"
  s.email = ["sam@snug.ug", "scott@scottkellum.com", "mason@zivtech.com"]
  s.homepage = "https://github.com/Snugug/toolkit"
  s.rubyforge_project = "toolkit"
  s.rubygems_version = "2.2.2"
  s.summary = "Progressive Enhancement and RWD toolkit of awesomeness"

  s.installed_by_version = "2.2.2" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 3

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_runtime_dependency(%q<compass>, [">= 0.12.2"])
      s.add_runtime_dependency(%q<singularitygs>, [">= 1.0.7"])
      s.add_runtime_dependency(%q<breakpoint>, [">= 2.0.2"])
      s.add_runtime_dependency(%q<sassy-strings>, [">= 0.1"])
      s.add_runtime_dependency(%q<color-schemer>, [">= 0.2.3"])
    else
      s.add_dependency(%q<compass>, [">= 0.12.2"])
      s.add_dependency(%q<singularitygs>, [">= 1.0.7"])
      s.add_dependency(%q<breakpoint>, [">= 2.0.2"])
      s.add_dependency(%q<sassy-strings>, [">= 0.1"])
      s.add_dependency(%q<color-schemer>, [">= 0.2.3"])
    end
  else
    s.add_dependency(%q<compass>, [">= 0.12.2"])
    s.add_dependency(%q<singularitygs>, [">= 1.0.7"])
    s.add_dependency(%q<breakpoint>, [">= 2.0.2"])
    s.add_dependency(%q<sassy-strings>, [">= 0.1"])
    s.add_dependency(%q<color-schemer>, [">= 0.2.3"])
  end
end
