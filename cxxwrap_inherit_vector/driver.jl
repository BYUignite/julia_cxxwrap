include("foobar.jl")
using .Libfoobar
using CxxWrap

f = foo(5)
b = bar(5)

vf = add(f, 5)
vb = add(b, 5)

println("\n", "vf = $vf")
println("\n", "vb = $vb")

vv = StdVector(Float64[0.0, 0.0, 0.0])
vv = StdVector([0.0, 0.0, 0.0])
vv = StdVector(zeros(5))

setvec(b, vv)

println(vv)


