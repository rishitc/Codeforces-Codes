use std::io;

fn main() {
    let mut num_1 = String::new();
    let mut num_2 = String::new();

    io::stdin()
        .read_line(&mut num_1)
        .expect("Failed to read line");

    num_1 = num_1.trim().parse().expect("Error parsing number");

    io::stdin()
        .read_line(&mut num_2)
        .expect("Failed to read line");

    num_2 = num_2.trim().parse().expect("Error parsing number");

    let answer = num_2
        .chars()
        .zip(num_1.chars())
        .map(|(x, y)| if x == y { "0" } else { "1" })
        .collect::<String>();

    println!("{}", answer);
}
