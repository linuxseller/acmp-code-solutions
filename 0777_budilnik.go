package main

import (
	"fmt"
)

func main() {
	var (
		S   int
		T   int
		res int
	)
	fmt.Scanf("%d %d", &S, &T)

	if S > T {
		res = 12 - S + T
	} else {
		res = T - S
	}

	fmt.Println(res)
}
