let num = Int(readLine()!)!
let vote = readLine()!
let voteArr = vote.split{$0 == " "}.map(String.init)
var stArr = [Int]()

for i in 0...num-1 {
    stArr.append(i+1)
    if i == 0 {
        continue
    } else if i > 0 {
        stArr.insert(stArr[i], at: i - Int(voteArr[i])!)
        stArr.remove(at: i+1)
    }
}

// print
for i in 0...num-1 {
    print(stArr[i], terminator:" ")
}
