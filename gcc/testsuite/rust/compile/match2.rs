enum Foo {
    A,
    B,
    C(char),
    D { x: i64, y: i64 },
}

fn inspect(f: Foo) {
    match f {
        Foo::A => {}
        Foo::B => {}
        Foo::C(x) => {}
        Foo::D { y } => {} // { dg-error "pattern does not mention fields x" }
    }
}
