use std::io::{stdin};

fn main()
{
    let mut input = String::new();
    stdin()
        .read_line(&mut input)
        .unwrap();
    let v = input
        .split_whitespace()
        .map(|input| input.parse::<f64>().unwrap())
        .collect::<Vec<_>>();
    let a:f64 = v[0];
    let b:f64 = v[1];
    let result:f64 = a / b;
    println!("{}", result);
}