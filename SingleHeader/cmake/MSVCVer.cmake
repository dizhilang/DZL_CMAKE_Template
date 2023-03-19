if (MSVC)
	set(SYS win)
	if (MSVC14)
	SET(VC VC140)
	endif()
	if(MSVC12)
	SET(VC VC120)
	endif()
	if(MSVC10)
	SET(VC VC100)
	endif()

	message("MSVC_VERSION is ${MSVC_VERSION}")
ELSE(MSVC)
	set(SYS linux)
	IF(APPLE)
	SET(VC APPLE)
	ELSE()
	SET(VC Linux)
	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
	ENDIF()
endif(MSVC)

if (${CMAKE_SIZEOF_VOID_P} EQUAL 8)
	SET(CPU x64)
else()
	SET(CPU x86)
endif()

message("SYS is ${SYS}")
message("VC is ${VC}")
message("CPU is ${CPU}")
