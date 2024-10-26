# SIS:AUTO_GENERATED: Remove this line if you edit the file, otherwise it will be overwritten

list(APPEND X_GCC_CUSTOM_WARNINGS_TO_BE_SUPPRESSED unused-parameter)

define_automated_test_program(test.unit.xhelpers.functions.1 test.unit.xhelpers.functions.1.cpp)

target_link_libraries(test.unit.xhelpers.functions.1
	PRIVATE
		Pantheios::Pantheios.core
		Pantheios::Pantheios.fe.all
		Pantheios::Pantheios.be.fprintf
		Pantheios::Pantheios.bec.fprintf
)
