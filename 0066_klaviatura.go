package main

import (
	"fmt"
)

func main() {
	var letters string = "qwertyuiopasdfghjklzxcvbnmq"
	var input string
	var letter uint8

	fmt.Scan(&input)
	letter = input[0]

	for i := 0; i < 27; i++ {
		if letter == letters[i] {
			letter = letters[i+1]
			break
		}
	}

	fmt.Println(string(letter))

}
