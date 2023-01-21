package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		L       int
		W       int
		H       int
		SWall_1 int
		SWall_2 int
	)
	fmt.Scanf("%d %d %d", &L, &W, &H)
	SWall_1 = W * H
	SWall_2 = L * H
	// fmt.Println(W, H, L)
	fmt.Println(math.Ceil(float64(SWall_1+SWall_2) / 8))
}
