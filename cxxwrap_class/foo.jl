module Libfoo
    using CxxWrap

    @wrapmodule "lib/libfoo_w"

    function __init__()
        @initcxx
    end

    export foo, add
end


