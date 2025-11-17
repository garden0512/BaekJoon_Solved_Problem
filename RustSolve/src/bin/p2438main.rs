use std::io::{stdin};

fn main()
{
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let v:Vec<i32> = input
        .split_whitespace()
        .map(|input| input.parse::<i32>().unwrap())
        .collect::<Vec<_>>();
    let mut i = 1;
    while i <= v[0]
    {
        for _ in 0..i
        {
            print!("*");
        }
        println!();
        i += 1;
    }
}