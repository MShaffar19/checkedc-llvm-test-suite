list(APPEND LDFLAGS -lm)
list(APPEND CFLAGS -std=gnu99)
set(RUN_OPTIONS 9090 5)
llvm_multisource(Symbolics-flt)
