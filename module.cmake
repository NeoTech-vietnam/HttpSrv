# Module-owned source and public include metadata.
list(APPEND NEO_MODULE_SOURCES
    "${CMAKE_CURRENT_LIST_DIR}/HttpSrv.c"
    "${CMAKE_CURRENT_LIST_DIR}/HttpSrv_EspIdf.c"
)
list(APPEND NEO_MODULE_INCLUDES
    "${CMAKE_CURRENT_LIST_DIR}/."
)
