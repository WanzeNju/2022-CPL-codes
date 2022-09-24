add_executable(change change.c)

add_executable(Pi Pi.c)

add_executable(Time Time.c)

add_executable(ASCII ASCII.c)

add_executable(Inverse Inverse.c)

add_executable(Gravity Gravity.c)

add_executable(Julian Julian.c)

add_executable(Equation Equation.c)

target_link_libraries(Pi m)

target_link_libraries(Equation m)