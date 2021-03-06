// Go 1.2
// go run helloworld_go.go

package main

import (
    . "fmt"
    "runtime"
    "time"
)

var (
i int = 0
c1, c2 chan int
)

func numberMaster() {
	for {
		select {
			case <- c1:
				i++
			case <- c2:
				i--
		}
	}
}

func incrementGoroutine() {
    for count := 0; count < 1000000; count++ {
	c1 <- 1
    }
}

func decrementGoroutine() {
    for count := 0; count < 1000000; count++ {
	c2 <- 1
    }
}

func main() {
    runtime.GOMAXPROCS(runtime.NumCPU())    // I guess this is a hint to what GOMAXPROCS does...
                                            // Try doing the exercise both with and without it!
    go numberMaster()
    go incrementGoroutine()                      // This spawns someGoroutine() as a goroutine
    go decrementGoroutine()                      // This spawns someGoroutine() as a goroutine

    // We have no way to wait for the completion of a goroutine (without additional syncronization of some sort)
    // We'll come back to using channels in Exercise 2. For now: Sleep.
    time.Sleep(100*time.Millisecond)
    Println("Value of i is: ", i)
}
