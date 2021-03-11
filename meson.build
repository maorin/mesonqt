project('qt_test',
        'cpp',
	default_options : ['cpp_std=c++11'])

qt5 = import('qt5')
qt5_dep = dependency('qt5', modules: ['core', 'Widgets'])
#inc = include_directories('includes')

moc_files = qt5.preprocess(moc_headers : ['LoginWindow.h','MainWindow.h'],
#                          include_directories: inc,
                           dependencies : qt5_dep)

executable('qt_test', 'main.cpp', 'LoginWindow.cpp', 'MainWindow.cpp', moc_files, dependencies : qt5_dep)
