#http://www.geeksforgeeks.org/data-structures/#Array

get_sum = function(x, y) {
        x + y  
}

get_max = function(x, y, z) {
        if (x > y){
                big = y
        } else {
                big = x
        }
        
        if (z > big) {
                max = z
        } else {
                max = big
        }
        return (max)
}

get_prime = function (n) {       
        x = 2
        if (n == 1) {
                print("invalid number")
                return
        }
        
        while (x < n) {
                if (n %% x == 0) {
                        print ("prime = false") 
                        break
                } else {
                        x = x + 1 
                }
        }
        
        if (n == x) {   
                print ("prime = true")
        }
}

loop = for (i in 1:10) {
        print (i)
}

## Factorial of a number

factorial = function (n) {
        fact = 1
        while (n > 0) {
                fact = fact * n
                n = n - 1
        }            
        return (fact)
}

## Factorial of a number using recursion

rec_factorial = function (n) {
        if (n == 1) {
                return (1)
        }
        
        return (n* rec_factorial(n-1)) 
}


rec_factorial = function (n) {
        if (n == 1) {
                return (1)
        }
        
        return (n* rec_factorial(n-1)) 
}

rec_get_binary = function (n) {
        if (n == 0) {
                return
        }
        
        print(n %% 2)
        n = as.integer(n / 2)
        
        rec_get_binary(n)
}


get_binary = function (n)
{
        while (n > 0) {
                print (n %% 2)
                n = n /2;
        }
}

rec_get_binary(5)

t = rec_factorial(n)
t = n * rec_factorial(n-1)
t = n * n-1 * rec_factorial(n-2)
t = n * n-1 * n-2 * .... * 1

rec_factorial(5)


num_factor = function(n) { 
        for (i in 1:n)
                if (n %% i == 0) {
                        print (i) 
                }
}

num_factor(8)













max = get_max(2,5,7)
sum = get_sum(2,4)


pollutantmean <- function(directory, pollutant, id = 1:332) {
        
        directory = read.csv("Desktop/specdata/")
        
        files <- list.files("Desktop/specdata/")
        filepaths <- paste("Desktop/specdata/", "/", files, sep="")
        init <- if (pollutant == "sulfate") {
                2
        } else {
                3
        }
        tdata <- matrix(NA,0,4)
        for (i in id) {
                data <- read.csv(filepaths[i])
                tdata <- rbind(tdata, data)
        }
        mean(tdata[,init], na.rm=TRUE)
}






#binary print
#reverse a number

















