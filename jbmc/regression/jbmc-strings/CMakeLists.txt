add_test_pl_tests(
    "$<TARGET_FILE:jbmc> --validate-goto-model --validate-ssa-equation"
)

add_test_pl_profile(
    "jbmc-strings-symex-driven-lazy-loading"
    "$<TARGET_FILE:jbmc> --validate-goto-model --validate-ssa-equation --symex-driven-lazy-loading"
    "-C;-X;symex-driven-lazy-loading-expected-failure;-s;symex-driven-loading"
    "CORE"
)
