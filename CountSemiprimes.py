def primeSieve(N):
    # first assume that numbers from 0 to N are all prime numbers
    prime_sieve = [True] * (N+1)
    # special case
    prime_sieve[0] = prime_sieve[1] = False
    # algorithm to find numbers that are not prime numbers
    i = 2
    while (i * i <= N):
        if (prime_sieve[i]):
            k = i*i
            while (k <= N):
                prime_sieve[k] = False
                k += i
        i += 1
    
    return prime_sieve
    
def partialSemiPrime(N):
    prime_sieve = primeSieve(N)
    # primes vector to store all the prime numbers
    primes = []
    for i in range(len(prime_sieve)):
        if (prime_sieve[i]):
            primes.append(i)
            
    semi_prime_sieve = [False] * (N+1)
    for i in range(len(primes)):
        if (i * i > N):
            break
        for j in range(i, len(primes)):
            if primes[i] * primes[j] > N:
                break
            semi_prime_sieve[primes[i] * primes[j]] = True
            
    partial_semi_prime = []
    count = 0
    for x in semi_prime_sieve:
        if x:
            count += 1
        partial_semi_prime.append(count)
        
    return partial_semi_prime

def solution(N, P, Q):
    # write your code in Python 2.7
    partial_semi_prime = partialSemiPrime(N)
    result = []
    M = len(P)
    for i in range(M):
        result.append(partial_semi_prime[Q[i]] - partial_semi_prime[P[i]-1])
        
    return result
