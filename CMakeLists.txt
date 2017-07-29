project(gnuplot_example)

add_executable(gnuplot_example main.cpp)

install(TARGETS gnuplot_example RUNTIME DESTINATION bin)
