# Typhoon

<img src="http://image.noelshack.com/fichiers/2018/50/1/1544456374-tornado-2.png" align="right" title="Typhoon's logo." height="160px" width="160px"/>

[![madewithc](https://forthebadge.com/images/badges/made-with-c.svg)]()

[![madewithpython](https://forthebadge.com/images/badges/made-with-python.svg)]()

[![works](https://forthebadge.com/images/badges/60-percent-of-the-time-works-every-time.svg)]()

# Introduction

Typhoon is a security-oriented and cross-platform tool created for help exploit program's vulnerabilities by analyzing and extracting data from vulnerable binary file.

It can be used on **many architectures**, **file formats** and **operating-system**.

## Content of Typhoon's sections: 

**- A patcher in command line** -> v0.1 
> (write an hexadecimal string at a specific place)

**- A gadget finder** -> v0.1 
> (search for a piece of code ending with the 'ret' instruction)

**- A precise disassembler** -> v0.1 
> (starts disassembling the program from an address or an offset)

**- A ROPchain generator** -> v0.1 
> (generate a ropchain that can be executed or written in a file at any time)

**- An hexadecimal viewer / editor** -> v0.1 
> (observe the hexadecimal and ascii equivalent of the program or write a string at a specified location)

## Available for which architectures?

<a href="https://en.wikipedia.org/wiki/X86">x86</a>, <a href="https://en.wikipedia.org/wiki/X64">x86-64</a>, <a href="https://en.wikipedia.org/wiki/ARM_architecture">ARM (Advanced/Acorn RISC Machine)</a>, <a href="https://en.wikipedia.org/wiki/MIPS_architecture">MIPS (Microprocessor without Interlocked Pipelined Stages).</a> 

## Available for which file formats?

<a href="https://en.wikipedia.org/wiki/Executable_and_Linkable_Format">Executable and Linking Format (ELF)</a>, <a href="https://en.wikipedia.org/wiki/Portable_Executable">Portable Executable (PE)</a>, <a href="https://en.wikipedia.org/wiki/Mach-O">Mach-O</a>.

## Available for which operating-systems?

Microsoft Windows(All versions), GNU/Linux, IOS.

## Dependencies

This tool has been compiled with **gcc**, so it is necessary to have this compiler. You must also be able to use **make**.
