add_library(MathFunctions mysqrt.cpp MathFunctions.h)
# define method export
install(TARGETS MathFunctions DESTINATION lib)
install(FILES MathFunctions.h DESTINATION include)