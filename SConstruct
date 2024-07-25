try:
    Import("env")
except:
    # Default tools with no platform defaults to gnu toolchain.
    # We apply platform specific toolchains via our custom tools.
    print("hello!!")
    env = Environment(COMPILATIONDB_USE_ABSPATH=False)
    env.Tool('compilation_db')
    cdb = env.CompilationDatabase()
    Default(cdb)

env.Append(CXXFLAGS=["-std=c++17"])

env.Append(CPPPATH=[[env.Dir(d) for d in [
  "include"
]]])

sources = [
  "src/Bench.cpp"
]

library = env.Library("build/c-bird", source=sources)

Default(library)
Return("library")
