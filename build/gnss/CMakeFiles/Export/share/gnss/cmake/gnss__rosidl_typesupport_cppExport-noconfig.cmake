#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gnss::gnss__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET gnss::gnss__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gnss::gnss__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgnss__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libgnss__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS gnss::gnss__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_gnss::gnss__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libgnss__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
