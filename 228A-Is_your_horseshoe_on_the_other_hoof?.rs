use std::collections::HashSet;
use std::io::stdin;

fn main() {
    let mut line = String::new();
    let mut count_of_horseshoes_to_buy: u32 = 0;
    let mut horseshoes: HashSet<u32> = HashSet::with_capacity(4);

    stdin().read_line(&mut line).unwrap();
    let horseshoe_list: Vec<u32> = line
        .trim()
        .split(' ')
        .map(|s| s.parse::<u32>().expect("Not an integer!"))
        .collect();
    for horseshoe in horseshoe_list {
        if horseshoes.contains(&horseshoe) {
            count_of_horseshoes_to_buy += 1;
        } else {
            horseshoes.insert(horseshoe);
        }
    }
    println!("{}", count_of_horseshoes_to_buy);
}
