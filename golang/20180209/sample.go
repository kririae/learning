package main

import (
	"sort"
	"fmt"
	"strings"
)

func main() {
	// sampleString := "loliloli"

	// fmt.Println(strings.Contains(sampleString, "loli"))
	// fmt.Println(strings.Index(sampleString, "lo"))
	// fmt.Println(strings.Count(sampleString, "l"))
	// fmt.Println(strings.Replace(sampleString, "loli", "lr", ~(1 << 31)))
	astring := "1, 2, 3, 4, 5, 6"
	fmt.Println(strings.Split(astring, ","))

	letters := []string {"d", "b", "c"}
	sort.Strings(letters)
	fmt.Println(letters)

	listofnums := strings.Join([]string{"3, 2, 1"}, ", ")
	fmt.Println(listofnums)
}

/*
import (
	"fmt"
	"strings"
	"sort"
	"os"
	"log"
	"io/ioutil"
	"strconv"
)
*/