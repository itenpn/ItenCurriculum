# Iten's Curriculum

## Chapter Three: Linux and the Command Line

### Ahem, you mean GNU/Linux
Sorry, but I have to be frank here. When people mention linux,
the probably mean GNU/Linux, the operating system. No that we
have that out of the way.

### Unix-Like Operating Systems
In the 70's AT&T had created a new operating system called Unix.
Back at the time, operating systems were creating using assembly,
which made portablity hard. When AT&T was hit with multiple antitrust
suits and forced to split into separate bell companies, the code
behind Unix was released publicly and quickly became the dominant
OS of its era. The main problem was that making it work on specific
hardware was really difficult. Dennis Ritche managed to recreate Unix
entirely in C, which made it instantly portable to the masses. Thanks
to Ritche much of this discussion would be possible today.  

Around the same time, two different groups were trying to improve upon
Unix. The GNU Project headed by Richard Stallman created an OS with the
intent of providing exclusively free and open source software. Linux was
created by Linus Torvalds. Linux is not an operating system, but a kernel.
Kernels are responsible for connecting the gap between hardware and software.
They manage the different components and provide information to the OS.
GNU/Linux had a cult following, but didn't really hit mainstream until
the 90's when organizations such as NASA tried to get out of the monopolistic
Microsoft and needed free alternatives.  

There are many Unix-Like operating systems that one can choose from. But
the two most common are GNU/Linux and MacOS. And both of those have the
same level of support. The following information applies mostly to both,
they are very similar, but MacOS tends to have more GUI interaction. GNU/Linux
also can become very GUI oriented too if you prefer.  

### Linux Distributions
Because GNU/Linux is open source, you can find many distributions, or distros
to download. Most distros are derivatives of each other. The main core distros
tend to be Debian, Arch, and Redhat. Ubuntu, which is based off of Debian, is
the most popular and user-friendly disto. If you have never used GNU/Linux before
and want to start off simple, then Ubuntu is a fantastic choice. Arch is an
entirely open source project. The community created `pacman` its own package
manager to handle a massive software repository, along with the Arch User
Repository, or AUR. The AUR is frankly one of the greatest achievements of Arch
and is the main reason Arch is recognized as one of the most important distros.
However, it is important to note that Arch is by far the hardest to implement.
Arch assumes nothing. One has to download everything themselves, which is very
daunting for the inexperienced user. But if you are up to the challenge, the Arch
Wiki is second to none, and is where you will probably go for any variation of
GNU/Linux. Arch also has easier alternatives in Manjaro and Antergos. Redhat
is a private company that creates mainly corporate server linux distros. But
they also have an open source Fedora distro. Red hat holds a premier linux
certification program, that could prove very handy in the business world, as
Redhat has crafted their programs to create servers. So knowing their quirks
is important if you want to be successful in computer science.  

### FOSS
A core value of GNU/Linux is the idea of free and open source software. Everything
created for GNU/Linux follows this philosophy. The idea is that software should be
open for everyone to edit. This allows for a reduction of security vulnerabilities,
and allows people to take code and make it their own to fulfill their mission. This
is why GNU/Linux has such a hard time in bringing in proprietary software into its
catalog. Primarily you will be using the GNU's collection of software from your distro's
repositories. GNU has equivalents to nearly all proprietary software, and they also
have some of their own which has no proprietary equivalent. Let's look at important
software that are key in GNU/Linux.  

- Git: A key aspect for open source can be found in git. Git is a version control
software that can be published online. Being fluent in git is essential for computer
science because it allows us to work on projects as a group and not individually.  
- GIMP: GIMP is a free alternative to photoshop.  
- Libre Office: a free alternative to Microsoft's office products  
- Vim: an extension to Vi, which is GNU/Linux's primary terminal editor  
- Emacs: an extension of other terminal editors in that it is almost akin to an
operating system in itself. Emacs can be programmed in lisp to do nearly anything.  
