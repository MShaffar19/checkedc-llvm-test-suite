list(APPEND LDFLAGS -lm)
list(APPEND CFLAGS -std=gnu99)
set(RUN_OPTIONS 3125 14)
llvm_multisource(Equivalencing-dbl)
