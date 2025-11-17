use std::io::{stdin};

fn main()
{
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let v = input
        .split_whitespace()
        .map(|input| input.parse::<i32>().unwrap())
        .collect::<Vec<_>>();
    let a:i32 = v[0];
    let b:i32 = v[1];
    if a < b
    {
        println!("<");
    }
    else if a > b
    {
        println!(">");
    }
    else if a == b
    {
        println!("==");
    }
}