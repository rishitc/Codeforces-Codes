use std::io;


fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Not a valid string");
    let user_val: i64 = input.trim().parse::<i64>().unwrap_or(-1);

    let answer = user_val / 2  - (user_val & 1) * user_val;
    println!("{}", answer);
}