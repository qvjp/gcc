fn test(a: i32) -> i32 {
    a + 1
}

fn main() {
    let a: fn(i32) -> i32 = test;
    let b = a(1);
    // { dg-warning "unused name" "" { target *-*-* } .-1 }
}
