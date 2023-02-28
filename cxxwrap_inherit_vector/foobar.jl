module Libfoobar
    using CxxWrap

    @wrapmodule("lib/libfoobar_w", :define_foobar_module)

    function __init__()
        @initcxx
    end

    export foo, bar, add, setvec
end


