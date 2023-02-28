include("foo.jl")
using .Libfoo

f = foo(3)

a = add(f, 3)

println("\n", "a = $a")
