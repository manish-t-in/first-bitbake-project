project('my_project', 'cpp', default_options : ['cpp_std=c++20'])

src_files = [
  'src/main.cpp',
  'src/shapes.cpp'
]

inc_dirs = include_directories('inc')

phosphor_logging_dep = dependency('phosphor-logging', required: true)

executable('exeBinary', src_files,
  include_directories : inc_dirs,
  dependencies : phosphor_logging_dep,
  install: true
)
