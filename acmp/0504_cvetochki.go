package main

import (
	"fmt"
)

func main() {
	var (
		temp    rune
		day     int
		flovers = [3]rune{'G', 'C', 'V'}
	)
	fmt.Scanf("%d", &day)
	for i := 0; i < day; i++ {
		temp = flovers[2]
		flovers[2] = flovers[1]
		flovers[1] = flovers[0]
		flovers[0] = temp
	}
	for _, k := range flovers {
		fmt.Print(string(k))
	}
}