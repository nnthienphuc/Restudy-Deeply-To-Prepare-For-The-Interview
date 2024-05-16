import random
from sympy import mod_inverse, gcd

def generate_keypair(p, q):
    n = p * q
    phi = (p - 1) * (q - 1)
    
    e = random.randint(2, phi - 1)
    while gcd(e, phi) != 1:
        e = random.randint(2, phi - 1)
    
    d = mod_inverse(e, phi)
    
    return ((e, n), (d, n))

def encrypt(message, public_key):
    e, n = public_key
    cipher_text = [pow(ord(char), e, n) for char in message]
    return cipher_text

def decrypt(cipher_text, private_key):
    d, n = private_key
    plain_text = [chr(pow(char, d, n)) for char in cipher_text]
    return ''.join(plain_text)

# Ví dụ về sử dụng RSA
p = 73
q = 89
public_key, private_key = generate_keypair(p, q)
print("Public key:", public_key)
print("Private key:", private_key)

message = "HELLO"
print("Original message:", message)

encrypted_message = encrypt(message, public_key)
print("Encrypted message:", encrypted_message)

decrypted_message = decrypt(encrypted_message, private_key)
print("Decrypted message:", decrypted_message)