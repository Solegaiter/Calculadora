project(
    'calculator',
    'cpp',
    version: '0.1',
    default_options: ['warning_level=3', 'werror=true', 'cpp_std=c++23'],
)

add_project_arguments(
    ['-fvisibility=hidden', '-fvisibility-inlines-hidden'],
    language: 'cpp',
)

sources = [
    'src/main.cpp',
    'src/miscelanea.cpp',
    'src/casos_switch.cpp',
    'src/circulos.cpp',
    'src/comprobador.cpp',
    'src/figuras_planas.cpp'
]


executable('calculator', sources, install: true)