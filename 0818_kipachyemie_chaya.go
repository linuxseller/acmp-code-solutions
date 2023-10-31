package main

import (
	"fmt"
)

func main() {
	var (
		amount int
		sum    int
		num    int
	)
	sum = 1
	fmt.Scanf("%d", &amount)
	for i := 0; i < amount; i++ {
		fmt.Scanf("%d", &num)
		sum += num - 1
	}
	fmt.Println(sum)
}
