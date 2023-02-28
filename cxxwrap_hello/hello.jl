
module CppHello

  using CxxWrap
  @wrapmodule("lib/libhello")

  function __init__()
    @initcxx
  end

end

#################################

hello = CppHello.hello
println("\n", CppHello.hello())
println(hello())

