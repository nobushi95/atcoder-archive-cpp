use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
    };
    let ans = if a + b == c && a - b != c {
        "+"
    } else if a + b != c && a - b == c {
        "-"
    } else if a + b == c && a + b == c {
        "?"
    } else {
        "!"
    };
    println!("{ans}");
}
