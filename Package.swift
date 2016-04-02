#if os(Linux)
import Glibc
#else
import Darwin
#endif

system("mkdir -p .build/debug")

#if os(Linux)
    system("cp `find Packages/ -type d -name swift-libmysql*`/lib/linux-64/* .build/debug")
#else
    system("cp `find Packages/ -type d -name darwin*`/lib/linux-64/* .build/debug")
#endif
