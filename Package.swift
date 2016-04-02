#if os(Linux)
import Glibc
#else
import Darwin
#endif

system("mkdir -p .build/debug")

#if os(Linux)
    system("cp ./lib/linux-64/* .build/debug")
#else
    system("cp ./lib/darwin/* .build/debug")
#endif
