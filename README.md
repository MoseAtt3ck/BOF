    ███╗   ███╗ ██████╗ ███████╗███████╗                    
    ████╗ ████║██╔═══██╗██╔════╝██╔════╝                    
    ██╔████╔██║██║   ██║███████╗█████╗                    
    ██║╚██╔╝██║██║   ██║╚════██║██╔══╝                    
    ██║ ╚═╝ ██║╚██████╔╝███████║███████╗                    
    ╚═╝     ╚═╝ ╚═════╝ ╚══════╝╚══════╝                    

BOF Vulnerability - Exploit Playground
Welcome to the Buffer Overflow Playground, a dark corner of C programming where the buffer limits are pushed, and chaos reigns supreme. 👾 This example will show you how an innocent-looking program can be transformed into a security nightmare.

⚠ Warning
💀 For Hackers & Learners Only!
Do not run this in production. Use it in a safe, isolated environment. If your laptop starts smoking, don't call us.💻

💣 Compilation
To arm this vulnerable program with all its glorious flaws, compile it like this:

bash
gcc -fno-stack-protector -z execstack -o bof bof.c
Flags explanation:

-fno-stack-protector: Disables the stack protector to allow stack smashing.
-z execstack: Makes the stack executable (useful for shellcode).

🎯 Exploitation
Run the binary and watch the fun unfold:

bash
./bof
Enter a string longer than 20 characters to see what happens. Example:


Program prints garbage. 😵
Segmentation fault (core dumped). 💥
Your own custom shellcode executed (you wizard 🧙).
