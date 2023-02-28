include("foobar.jl")
using .Libfoobar

f = foo(5)
b = bar(5)

vf = add(f, 5)
vb = add(b, 5)

println("\n", "vf = $vf")
println("\n", "vb = $vb")
