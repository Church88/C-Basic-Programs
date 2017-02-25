Morgan Stanley | Columbia University | Texas A&M University 



home | C++ | FAQ | technical FAQ | C++11 FAQ | publications | TC++PL | Tour++ | Programming | D&E | bio | interviews | applications | glossary | compilers 


Bjarne Stroustrup's FAQ

Modified February 10, 2016 

These are questions that people ask me often. If you have better questions or comments on the answers, feel free to email me bs at cs dot tamu dot edu. Please remember that I can't spend all of my time improving my homepages. 

This page concentrates on personal opinions and general questions related to philosophy. For questions that more directly relate to C++ language features and the use of C++, see The C++ Foundation's FAQ or my C++ style and technique FAQ. For C++ terminology and concepts, see my C++ glossary. For links to useful sources of C++ information, see my C++ page and my C++11 FAQ. For information about my books (incl. reviews and support information), see my book list. For papers and ISBNs for translations of my books, see my publication list. 

Translations: 
• Chinese (simplified) 
	• Chinese (traditional). 
	• Belorussian 



	Index
	•General 
	•Learning C++ 
	•Standardization 
	•Books 
	•Other languages 
	•C and C++ 
	•History of C++ 
	•Etc. C++ questions 
	•Personal 


	• General: ◦  What's so great about classes? 
	◦  What is "OOP" and what's so great about it? 
	◦  What is "generic programming" and what's so great about it? 
	◦  What is C++? 
	◦  Why does C++ allow unsafe code? 
	◦  What is "multiparadigm programming"? 
	◦  Is C++ in decline? 
	◦  What's being done to improve C++? 
	◦  Is it true that ...? 

	• Learning C++: ◦  What is the best book to learn C++ from? 
	◦  How long does it take to learn C++? 
	◦  Knowing C is a prerequisite for learning C++, right? 
	◦  Should I learn a pure OO language before C++ to become a real OO programmer? 
	◦  How do I start learning C++? 
	◦  Will you help me with my homework? 
	◦  Where can I get a free C++ compiler? 
	◦  What's the best way to improve my C++ programs? 
	◦  Does it matter which programming language I use? 
	◦  Where can I learn about the background of C++? 

	• Standardization: ◦  Did the ANSI/ISO standards committee spoil C++? 
	◦  When will we have a C++ standard? 
	◦  Where can I get a machine-readable version of the standard? 
	◦  Are there any features you'd like to remove from C++? 
	◦  Why doesn't C++ have garbage collection? 
	◦  Why doesn't C++ have a GUI? 
	◦  Why doesn't C++ support threads? 
	◦  What is the difference between C++98 and C++14? 
	◦  What will the next standard look like? 

	• Books: ◦  When will you publish a 4th edition of "The C++ Programming Language"? 
	◦  Do you like e-books? 
	◦  Where do I find free machine-readable copies of your books? 
	◦  What's the difference between the "TC++PL" and "Programming" books? 

	• Other languages: ◦  Is Java the language you would have designed if you didn't have to be compatible with C? 
	◦  What do you think of C#? 
	◦  What do you think of C++/CLI? 
	◦  What do you think of EC++? 
	◦  C++ got its Object-Oriented concepts from Smalltalk? 
	◦  Do you really recommend Ada over C++ for larger projects? 
	◦  Would you compare C++ to "some language"? 
	◦  Others do compare their languages to C++; doesn't that annoy you? 
	◦  You won't compare C++ to other languages, but you write diatribes about C++? 
	◦  How can a legacy language like C++ compete with modern, advanced languages? 
	◦  Why are you so keen on portability? 

	• C and C++: ◦  C is better than C++ for small projects, right? 
	◦  Is C a subset of C++? 
	◦  What is the difference between C and C++? 
	◦  Do you really think that C and C++ could be merged into a single language? 
	◦  What do you think of C/C++? 
	◦  Why is the code generated for the "Hello world" program ten times larger for C++ than for C? 
	◦  Why did you make C++ (almost) compatible with C? 

	• History of C++: ◦  When was C++ invented? 
	◦  Why did you invent C++? 
	◦  Why did AT&T support the development of C++? 
	◦  Do you own C++? 
	◦  Where did the name "C++" come from? 
	◦  Which language did you use to write C++? 
	◦ Did you really not understand what you were doing? 

	• Etc. C++ questions: ◦  Why is C++ so BIG? 
	◦  Is C++ an Object-Oriented language? 
	◦  What is "legacy code"? 
	◦  Is the number of C++ users still doubling every year? 
	◦  Does anyone use C++ these days? 
	◦  Why isn't C++ used for Operating Systems? 
	◦  What do you think of Boost? 
	◦  What do you think of template metaprogramming? 
	◦  Did you expect C++ to become such a success? 
	◦  What's a good certification for C++ programmers? 
	◦  What C++ compiler do you recommend? Which libraries? 
	◦  Are lists evil? 

	• Personal: ◦  How do you pronounce "Bjarne Stroustrup"? 
	◦  Can I ask you a question? 
	◦  Why don't you answer your email? 
	◦  Why don't you make your website look modern? 
	◦  Is "bjarne" an impostor? 
	◦  You are Swedish? 
	◦ Did you really say that? 
	◦  Did you really give an interview to IEEE? 
	◦  Why did you go to work at Morgan Stanley? 
	◦  Why did you go to work at Texas A&M University? 
	◦  Why did you go to work at Bell labs?
	◦ 
	◦  What are you working on now? 





	 How do you pronounce "Bjarne Stroustrup?"
	 It can be difficult for non-Scandinavians. The best suggestion I have heard yet was "start by saying it a few times in Norwegian, then stuff a potato down your throat and do it again :-)" Here is a wav file. 
	 For people who can't receive sound, here is a suggestion: Both of my names are pronounced with two syllables: Bjar-ne Strou-strup. Neither the B nor the J in my first name are stressed and the NE is rather weak so maybe Be-ar-neh or By-ar-ne would give an idea. The first U in my second name really should have been a V making the first syllable end far down the throat: Strov-strup. The second U is a bit like the OO in OOP, but still short; maybe Strov-stroop will give an idea. 

	 Yes, this probably is the most frequently asked question :-) 

	 P.S. My first name is Bjarne - not Bjorn (not a name), Bjørn (a related but different name), nor Barney (an unrelated name). My second name is Stroustrup - not Stroustroup, Stroustrop, Strustrup, Strustrop, Strustroup, Straustrup, nor Straustroup (documents using each of these misspellings can be found using google). 




	  Can I ask you a question?
	  Certainly. I try to answer my email. However, please try to avoid asking a question that is answered in my homepages. Also, please don't rely on a prompt answer. I get a lot of email. 
	  Here are links to 
	  •biographical information 
	  •C++ information and links 
	  •papers (incl. a few that can be downloaded) 
	•books (incl. reviews, errata, and a few chapters that can be downloaded) 
	•interviews 




	 Why don't you answer your email?
	 I do, but I get a lot of email. I estimate that I reply to more than 95% of the (non spam) messages I receive. However, sometimes I get overwhelmed. Some messages are lost in my mailbox, some are delayed until I can find time, some are delayed until I get around to answering a set of related messages (this often happens to comments about potential errors in my books). Unfortunately, longer and more thoughtful messages are more likely to get delayed than simple ones that have simple answers. 
	 Also, if you mail me, please try to make sure that I can reply to you. I really hate it when I have written and sent a reply, just to find that the return address is invalid or inaccessible. 

	 Two kinds of messages have a relatively high chance of getting lost: homework questions and questions of the form "how do I use this proprietary library?". I'm a bit sad about not answering the latter questions because often the person asking doesn't understand that the DOS, Windows, or whatever interface from C++ is not part of the C++ standard (and I cannot keep up with the huge number of C++ libraries). If you fail to receive an answer, please consider if your question was of one of these kinds. 

	 Also, unless you give your name, I am now likely to delete the message unread. This is a new policy. I was never a great fan of pseudonyms, but I find that the chance of a polite technical conversation with the kind of person who thinks it cool to hide behind a name like suuupergeeek or coolGuy3 is getting too low for me to bother trying. 




	 Why don't you make your website look modern?
	 I'm a "contents provider" not a website designer. I can use my time to improve the contents or the looks, but not both. 
	 What looks "cool and modern" to someone is often considered bad taste by someone else, and fashions change fast. Also, very plain html downloads and displays faster than anything else, and many people still suffer from slow web connections. 




	 Is "bjarne" an impostor?
	 Probably not. Most of the newsgroup postings, interviews, etc. claiming to come from me do come from me. The obvious exception is the infamous IEEE "interview", which I find rather unfunny. I have been known to post to newsgroups from my gmail account where my user-id is "Bjarne"; somehow, that seems to confuse some people. If in doubt, consider the style and contents of the suspect message, check for other postings in the forum, or ask. 



	 What is so great about classes?

	 Classes are there to help you organize your code and to reason about your programs. You could roughly equivalently say that classes are there to help you avoid making mistakes and to help you find bugs after you do make a mistake. In this way, classes significantly helps maintenance. 

	 A class is the representation of an idea, a concept, in the code. An object of a class represents a particular example of the idea in the code. Without classes, a reader of the code would have to guess about the relationships among data items and functions - classes make such relationships explicit and "understood" by compilers. With classes, more of the high-level structure of your program is reflected in the code, not just in the comments. 

	 A well-designed class presents a clean and simple interface to its users, hiding its representation and saving its users from having to know about that representation. If the representation shouldn't be hidden - say, because users should be able to change any data member any way they like - you can think of that class as "just a plain old data structure"; for example: 
	 	struct Pair {
			         	string name, value;
							};

Note that even data structures can benefit from auxiliary functions, such as constructors. 
When designing a class, it is often useful to consider what's true for every object of the class and at all times. Such a property is called an invariant. For example, the invariant of a vector could be that its representation consists of a pointer to a number of elements and that number of elements is stored in an integer. It is the job of every constructor to establish the class invariant, so that every member function can rely on it. Every member function must leave the invariant valid upon exit. This kind of thinking is particularly useful for classes that manage resource, such as locks, sockets, and files. For example, a file handle class will have the invariant that it holds a pointer to an open file. The file handle constructor opens the file. Destructors free resources acquired by constructors. For example, the destructor for a file handle closes the file opened by the constructor: 
	class File_handle {
			public:
						File_handle(const char* n, const char* rw)
										{ f = fopen(n,rw); if (f==0) throw Open_failure(n); }
								~File_handle() { fclose(f); } // destructor
										// ...
									private:
										FILE* f;
											};

If you haven't programmed with classes, you will find parts of this explanation obscure and you'll underestimate the usefulness of classes. Look for examples. Like all good textbooks, TC++PL has lots of examples. For a less detailed and easier to approach book, see A Tour of C++. Most modern C++ libraries consist (among other things) of classes and a library tutorial is one of the best places to look for examples of useful classes. 



What is "OOP" and what's so great about it?

There are lots of definitions of "object oriented", "object-oriented programming", and "object-oriented programming languages". For a longish explanation of what I think of as "object oriented", read Why C++ isn't just an object-oriented programming language. That said, object-oriented programming is a style of programming originating with Simula (more than 40 years ago!) relying of encapsulation, inheritance, and polymorphism. In the context of C++ (and many other languages with their roots in Simula), it means programming using class hierarchies and virtual functions to allow manipulation of objects of a variety of types through well-defined interfaces and to allow a program to be extended incrementally through derivation. 

See What's so great about classes? for an idea about what great about "plain classes". The point about arranging classes into a class hierarchy is to express hierarchical relationships among classes and use those relationships to simplify code. 

To really understand OOP, look for some examples. For example, you might have two (or more) device drivers with a common interface: 
	class Driver {	// common driver interface
			public:
						virtual int read(char* p, int n) = 0;	// read max n characters from device to p
													// return the number of characters read
								virtual bool reset() = 0;	// reset device
										virtual Status check() = 0;	// read status
											};

This Driver is simply an interface. It is defined with no data members and a set of pure virtual functions. A Driver can be used through this interface and many different kinds of drivers can implement this interface: 	class Driver1 : public Driver { // a driver
		public:
					Driver1(Register);	// constructor
							int read(char*, int n);	
									bool reset();
											Status check();
												private:
													// implementation details, incl. representation
												};

	class Driver2 : public Driver { // another driver
			public:
						Driver2(Register);
								int read(char*, int n);	
										bool reset();
												Status check();
													private:
														// implementation details, incl., representation
													};

Note that these drivers hold data (state) and objects of them can be created. They implement the functions defined in Driver. We can imagine a driver being used like this: 	void f(Driver& d)	// use driver
		{
					Status old_status = d.check();	
							// ...
							d.reset();
									char buf[512];
											int x = d.read(buf,512);
													// ...
												}

The key point here is that f() doesn't need to know which kind of driver it uses; all it needs to know is that it is passed a Driver; that is, an interface to many different kinds of drivers. We could invoke f() like this: 	void g()
	{
				Driver1 d1(Register(0xf00));	// create a Driver1 for device
										// with device register at address 0xf00

						Driver2 d2(Register(0xa00));	// create a Driver2 for device
												// with device register at address 0xa00
								// ...
								int dev;
										cin >> dev;

												if  (dev==1) 
																f(d1);	// use d1
														else
																		f(d2);	// use d2
																// ...
															}

Note that when f() uses a Driver the right kind of operations are implicitly chosen at run time. For example, when f() is passed d1, d.read() uses Driver1::read(), whereas when f() is passed d2, d.read() uses Driver2::read(). This is sometimes called run-time dispatch or dynamic dispatch. In this case there is no way that f() could know the kind of device it is called with because we choose it based on an input. 
Please note that object-oriented programming is not a panacea. "OOP" does not simply mean "good" - if there are no inherent hierarchical relationships among the fundamental concepts in your problem then no amount of hierarchy and virtual functions will improve your code. The strength of OOP is that there are many problems that can be usefully expressed using class hierarchies - the main weakness of OOP is that too many people try to force too many problems into a hierarchical mould. Not every program should be object-oriented. As alternatives, consider plain classes, generic programming, and free-standing functions (as in math, C, and Fortran). 




What is "generic programming" and what's so great about it?

Generic programming is programming based on parameterization: You can parameterize a type with another (such as a vector with its element types) and an algorithm with another (such as a sort function with a comparison function). The aim of generic programming is to generalize a useful algorithm or data structure to its most general and useful form. For example, a vector of integers is fine and so is a function that finds the largest value in a vector of integers. However, a generic solution that provides a vector of any type the user cares to use and a function that finds the largest value in any vector is better still: 
	vector<string>::iterator p = find(vs.begin(), vs.end(), "Grail");

		vector<int>::iterator q = find(vi.begin(), vi.end(), 42);

		These examples are from the STL (the containers and algorithms part of the ISO C++ standard library); for a brief introduction, see A Tour of C++ from TC++PL. 
		Generic programming is in some ways more flexible than object-oriented programming. In particular, it does not depend on hierarchies. For example, there is no hierarchical relationship between an int and a string. Generic programming is generally more structured than OOP; in fact, a common term used to describe generic programming is "parametric polymorphism", with "ad hoc polymorphism" being the corresponding term for object-oriented programming. In the context of C++, generic programming resolves all names at compile time; it does not involve dynamic (run-time) dispatch. This has led generic programming to become dominant in areas where run-time performance is important. 

		Please note that generic programming is not a panacea. There are many parts of a program that need no parameterization and many examples where run-time dispatch (OOP) is needed. 




		Why does C++ allow unsafe code?
		That is, why does C++ support operations that can be used to violate the rules of static (compile-time) type safety? • to access hardware directly (e.g. to treat an integer as a pointer to (address of) a device register) 
	• to achieve optimal run-time and space performance (e.g. unchecked access to elements of an array and unchecked access to an object through a pointer) 
	• to be compatible with C 
	That said, it is a good idea to avoid unsafe code like the plague whenever you don't actually need one of those three features: •	don't use casts 
	•	keep arrays out of interfaces (hide them in the innards of high-performance functions and classes where they are needed and write the rest of the program using proper strings, vectors, etc.) 
	•	avoid void* (keep them inside low-level functions and data structures if you really need them and present type safe interfaces, usually templates, to your users) 
	•	avoid unions 
	•	if you have any doubts about the validity of a pointer, use a smart pointer instead, 
	•	don't use "naked" news and deletes (use containers, resource handles, etc., instead) 
	•	don't use ...-style variadic functions ("printf style") 
	•	Avoid macros excpt for include guards 
	Almost all C++ code can follow these simple rules. Please don't be confused by the fact that you cannot follow these rules if you write C code or C-style code in C++. 
	For an ambitious project to make C++ easier to use and safer without damaging its efficiency or flexibility, see the Core C++ Guidelines. 




	What is the best book to learn C++ from?
	There is no one book that is best for every person. There couldn't be one. People are too different in the way they learn, in what they already know, in what they need, in what they want, and in what kind of effort they are willing to make. There are quite a few excellent books on C++. Have a look at the ACCU (The Association of C and C++ Users) site. This is one of the best sites for book recommendations by experienced programmers who are not afraid to speak their mind (booksellers tend to give rosy reviews, and reviews of the form "This book is perfect, I love it, I have read almost three chapters, and can't wait to read more" are worse than useless - why anyone would take advice on how to learn C++ from someone who completely lacks C++ experience beats me). The ACCU rates books for level of experience required and overall quality. 
	For people who haven't programmed before or come from another language and want a relatively gentle introduction to modern C++, consider Programming: Principles and Practice using C++. This is the book I wrote for a freshman (1st year university students) programming class and it has benefitted from three years of classroom use. 

	For people who are programmers and willing to learn new concepts and techniques from a classical textbook, I recommend  The C++ Programming Language (4th edition). The book is aimed at programmers with some experience and a wish to master C++. It is not aimed at non-programmers trying to learn their first programming language or casual programmers trying to gain a superficial understanding of C++ as fast as possible. Consequently, this book focuses on concepts and techniques and goes to some pain to be complete and precise. It describes "pure C++," that is, the language independently of any particular software development environment or foundation library (except the standard library, of course). It contain comprehensive coverage of the standard library. 

	If you are already an experienced programmer and want a quick overview of what C++ has to offer, consider A Tour of C++. It presents the major features of C++ and its standard library in 180 pages. 

	If you want to know why C++ is the way it is, have a look at  The Design and Evolution of C++ (D&E). Understanding the design criteria and constraints helps writing better programs. 




	How long does it take to learn C++?
	That depends on what you mean by "learning." If you are a C programmer you can learn enough C++ to make you more effective at C-style programming in a day. 
	At TAMU, we use Programming: Principles and Practice using C++ to get freshmen (1st year students) through the fundamentals of C++ and the programming techniques it support (notably object-oriented programming and generic programming) in a semester. 

	On the other hand, if you want to be fully comfortable with all the major C++ language constructs, with data abstraction, Object-Oriented programming, generic programming, Object-Oriented design, etc., you can easily spend a year or two - if you aren't already acquainted with those techniques (say, from Java or C#). 

	Is that then the time it takes to learn C++? Maybe, but then again, that is the timescale we have to consider to become better designers and programmers. If a dramatic change of the way we work and think about building systems isn't our aim, then why bother to learn a new language? Compared to the time required to learn to play the piano well or to become fluent in a foreign (natural) language, learning a new and different programming language and programming style is easy. 

	For more observations about learning C++ see  D&E or a note from comp.lang.c++ that I wrote some time ago. 




	 Knowing C is a prerequisite for learning C++, right?
	 Wrong. The common subset of C and C++ is easier to learn than C. There will be less type errors to catch manually (the C++ type system is stricter and more expressive), fewer tricks to learn (C++ allows you to express more things without circumlocution), and better libraries available. The best initial subset of C++ to learn is not "all of C". 
	 See Learning Standard C++ as a New Language for a discussion of the choice of C++ constructs, techniques, and libraries for early learning. For an example of books that takes that approach systematically, see Stroustrup: Programming: Principles and Practice using C++ and Koenig&Moo: "Accelerated C++" from Addison Wesley's C++ In Depth series. 




	  Should I learn a pure OO language before C++ to become a real OO programmer?
	  No. Learning something new is almost always a good idea. However, each language is different and has it's own styles and quirks. Code written in some supposedly "pure" OO style modeled on some other language (quirks and all) is often sub-optimal and frustrating when too literally transcribed into C++. Also, "writing just pure Object-oriented code" is not one of my ideals; see my OOPSLA keynote  Why C++ isn't just an Object-Oriented Programming Language. If you want to become a good C++ programmer and don't have a few months to spare, concentrate on C++ and the concepts it embodies. 



	  How do I start learning C++?
	  Naturally, that strongly depends on what you already know and your reasons for learning C++. If you are a novice at programming, I strongly recommend that you find an experienced programmer to help you. Otherwise, the inevitable mistakes about language concepts and practical problems with the implementation you use can magnify into serious frustrations. 
	  You'll need a textbook for learning C++. This is the case even when your implementation comes with ample on-line documentation. The reason is that language and library documentation together with sample code are not good teachers of concepts. Typically such sources are silent about why things are the way they are and what benefits you can expect (and which you shouldn't expect) from a technique. Focus on concepts and techniques rather than language-technical details. 

	  When choosing a book, look for one that presents Standard C++ and use the standard library facilities in an integrated manner from the start. For example, reading a string from input should look something like 
	  	string s;	// Standard C++ style
			cin >> s;

			and not like this 	char s[MAX];	/* Standard C style */
				scanf("%s",s);

				Look for book recommendations from programmers with solid C++ experience. 
				I recommend Programming: Principles and Practice using C++, but remember that no one book is the best for everyone. Have a look at the book reviews on the ACCU (The Association of C and C++ Users) site. 

				Aim to write idiomatic C++: avoid simply writing code in the style of your previous language using C++ syntax; there is little to be gained from simply changing syntax. 




				Will you help me with my homework?
				No. Sorry. I don't do (other people's) homework. I get too many requests for help with homework and help with finding bugs in student programs to be able to find the time. Anyway, having a distant expert fix your programs is not the best way to learn. Try finding a local person with C++ experience that you can ask for guidance. A good mentor is the best help a student can have; maybe that's why they are not easy to find. 
				Also, no, I will not suggest "a good project for a student to work on". My experience is that learning enough about a student and his/her course to know what level of difficulty is required and what kind of project is of interest takes time. To think of a good project is then non-trivial, and to explain exactly what the project is and how to approach it can take several messages and several hours. I just don't have that kind of time. Remember, these request come at least weekly. Finally, some students seem to have the idea that if I suggest a project, I am morally obliged to provide quite detailed help in its completion. 

				Ideas: Look at the exercises in TC++PL or other good textbooks. Many of those exercises are designed to keep a student busy for several days, and reading those exercises can inspire an enterprising student to so something similar. Or look at the non-computer-science part of your world: Maybe a biology project could use support for a new measurement device or a friend studying history could use an improved database interface. Many of the best projects and the best uses of computers are outside traditional computer science. 

				See also my C++ style and techniques FAQ. Real novices facing their first "read some data, do something to it, and produce some output" exercise might be interested in a very simple program or a program reading a string from input. 




				Where can I get a free C++ compiler?
				From lots of places; see my C++ compilers list. 



				You are Swedish?
				No. I'm Danish. Have a look at my biography. 



				 What's the best way to improve my C++ programs?
				 I couldn't say. That depends on how you use it. Most people underestimate abstract classes and templates. Conversely, most people seriously overuse casts and macros. Have a look at one of my papers or books for ideas. One way of thinking of abstract classes and templates is as interfaces that allow a more clean and logical presentation of services than is easy to provide through functions or single-rooted class hierarchies. See my Style and techniques FAQ for some specific examples and ideas. 



				  Does it matter which programming language I use?
				  Yes, but don't expect miracles. Some people seem to believe that a programming language can or at least should solve most of their problems with system building. They are condemned to search forever for the perfect programming language and become repeatedly disappointed. Others dismiss programming languages as unimportant "implementation details" and put their money into development processes and design methods. They are condemned to program in COBOL, C, and proprietary design languages forever. A good language - such as C++ - can do a lot for a designer and a programmer, as long as its strengths and limitations are clearly understood and respected. 



				   Did the ANSI/ISO standards committee spoil C++?
				   No. They/we did a good job. You can quibble with details (and I do, sometimes loudly), but I'm happy with the language and the new standard library. ISO C++ is a better and more coherent language than earlier versions of C++. You can write much more elegant and maintainable C++ programs today than was possible when the standards process started. The new standard library is also a real boon. The provision of strings, lists, vectors, maps, and basic algorithms for such fundamental types makes a major difference to the way one can approach C++. See the library chapters of  The C++ Programming Language or  A Tour of C++ or one of my recent papers. 
				   C++14 is even better. 




				   When will we have a C++ standard?
				   We have had one since 1998. The second standard came in 2011. 
				   The current standard, C++14, was approved in 2014 and good implementationt are already shipping. C++11/C++14 is described in the current editions of my books. 




				    Where can I get a machine-readable version of the standard?

					The C++ standard (ISO/IEC 14882) is available for downloading at the the ANSI Electronic Store. Search for "14882", to find "INCITS/ISO/IEC 14882-2003 Programming Languages - C++" The cost is (as I write this) US$30.00 payable on-line via credit card. The downloaded document is in PDF form, about 3Mb total size. 

					A late working paper is available for free. This is close to the final draft international standard formally accepted by a 21-0 national vote in August 2011. 

					Be warned that the standard is not a tutorial; even expert programmers will do better learning about C++ and new C++ features from a textbook. 

					See my C++11 FAQ for references to C++11 material. 




					 Are there any features you'd like to remove from C++?
					 Not really. People who ask this kind of question usually think of one of the major features such as multiple inheritance, exceptions, templates, or run-time type identification. C++ would be incomplete without those. I have reviewed their design over the years, and together with the standards committee I have improved some of their details, but none could be removed without doing damage. 
					 Most of the features I dislike from a language-design perspective (e.g., the declarator syntax and array decay) are part of the C subset of C++ and couldn't be removed without doing harm to programmers working under real-world conditions. C++'s C compatibility was a key language design decision rather than a marketing gimmick. Compatibility has been difficult to achieve and maintain, but real benefits to real programmers resulted, and still result today. By now, C++ has features that allow a programmer to refrain from using the most troublesome C features. For example, standard library containers such as vector, list, map, and string can be used to avoid most tricky low-level pointer manipulation. 




					  What is the difference between C++98 and C++11 and C++14?
					  That's not something that is easily summarized. For most practical purposes, C++14 is backwards compatible with C++11 that is backwards compatible with C++98. There is a compatibility section at the back of the standard detailing compatibility issues. 
					  There is a long list of C++11 extensions to C++98 on C++11 page. C++14 is a relatively minor improvement over C++11, intended to complete C++11, rather than enabling new programming techniques. 


					   What will the next standard look like?
					   That will be C++17. It is a bit early to say for sure what C++17 will offer, but it is intended to be a major upgrade and I presented some of my ideas at a 2015 standards meeting. Note that it is unlikely that I get all that I wish for. For a complete list of proposals, see the WG21 site. 



					    When will you publish a 4th edition of "The C++ Programming Language"?
						It is in print: The C++ Programming Language (4th Edition). Addison-Wesley. ISBN 978-0321563842. May 2013. 
						It is now shipping from amazon, from the publisher, and elsewhere. 

						There are no current plans for a 5th edition. 


						 What's the difference between the "TC++PL" and "Programming" books?
						 The C++ Programming Language is primarily written for experienced programmers who wants to learn C++. It's style is that of a professional book. Programming - Principles and Practice using C++ is primarily written for people who wants to learn programming using C++. It can be used/read by people with no or only weak programming background as well as people who want to learn modern programming techniques, such as object-oriented programming and generic programming, as supported by C++. It's style is that of a text book. 
						 A summary: 
						 • TC++PL4: For programmers who wants to know modern C++ in depth 
						 • Tour++: For programmers who wants an overview of modern C++ 
						 • PPP: For novices and programmers with a weak understanding of C++ 
						 • D&E: For people interested in design principles and history 
						 • Others: Don't read them; they are outdated


						  Do you like e-books?
						  I like e-books for crime stories and SF. I don't think they are ready for serious technical information. For that, I prefer paper - even if I have to wait a couple of days and carry some extra weight. A good textbook, opened on a table,will show two pages - an area about three times that of an ebook reader. Reading on a large, good-quality screen is OK, just OK. 



						   Where do I find free machine-readable copies of your books?
						   There are no legal free machine readable copies of my books. If you see a copy freely available it must be a copyright violation (that is, it was stolen). 
						   Addison-Wesley offers electronic versions through Safari online books service and elsewhere. 




						    What C++ compiler do you recommend? Which libraries?
							I don't recommend. It wouldn't be fair. However, do get a recent release. Naturally, newer compilers approximate the ISO standard much more closely than compilers from a few years ago. 
							For an incomplete list of C++ implementations, see my C++ compilers list. 

							Also, where possible, prefer the standard library to non-standard "foundation libraries" and try to minimize use of proprietary extensions. 




							 Are lists evil?
							 According to some corners of the Web, I am under the impression that vectors are always better than linked lists and that I don't know about other data structures, such as trees (e.g. std::set ) and hash tables (e.g., std::unordered_map). Obviously, that's absurd. 
							 The problem seems to be an interesting little exercise that John Bentley once proposed to me: Insert a sequence of random integers into a sorted sequence, then remove those elements one by one as determined by a random sequece of positions: Do you use a vector (a contiguously allocated sequence of elements) or a linked list? For example, see Software Development for Infrastructure. I use this example to illustrate some points, encourage thought about algorithms, data structures, and machine architecture, concluding: 
							 •don't store data unnecessarily, 
							 •keep data compact, and 
							 •access memory in a predictable manner. 
							 Note the absence of ``list'' and ``vector'' in the conclusion. Please don't confuse an example with what the example is meant to illustrate. 
							 I used that example in several talks, notably: 
							 •My 2012 ``Going Native'' Keynote. 
							 This video has been popular: It has been downloaded more than 250K times (plus another 50K+ times at verious other sites). My impression is that many viewers failed to understand that the purpose of that example is to illustrate some general principles and to make people think. Initially, most people say ``List of course!'' (I have tried asking that question many times) because of the many insertions and deletions ``in the middle'' (lists are good at that). That answer is completely and dramatically wrong, so it is good to know why. 
							 I have been using the example for years, and had graduate students implement and measure dozens of variants of this exercise and different exercises. Examples and measurements by others can be found on the Web. Of course, 
							 •I have tried maps (they are much better than lists, but still slower than vectors) 
	•I have tried much larger elements sizes (eventually lists come into their own) 
	•I have used binary search and direct insertion for vectors (yes, they speed up even further) 
	•I checked my theory (no I'm not violating any big-O complexity rule; it is just that some operations can be dramatically more expensive for one data structure compared to another) 
	•I have preallocated links (that's better than std::list but the traversal still kills performance) 
	•I have used singly-linked lists, forward_lists, (that doesn't make much difference, but makes it a bit harder to ensure that the user code is 100% equivalent) 
	•I know (and say) that 500K lists are not common (but that doesn't matter for my main point). We use many structures (large and small) where there is a choice between linked and contiguous reprentation. 
	•I know that for insertion push_front() is faster for std::lists and push_back()s is faster for vectors. You can construct examples to illustrate that, but this example is not one of those. 
	My point is not about lists as such. They have their uses, but this example isn't one of them. Please don't confuse the example with what the example is used to illustrate. This example is about use of memory: We very often create a data structure, do some computation on it requiring access (often, traversal), and then delete it. The ordered sequence is simply an example of such use and the example is presented to get people to think about what matters in such cases. My suggestion is: •don't store data unnecessarily, 
	•keep data compact, and 
	•access memory in a predictable manner. 
	I emphasize the importance of cache effects. In my experience, all but true experts tend to forget those when algorithms are discussed. 
	And, yes, my recomendation is to use std::vector by default. More generally, use a contiguous representation unless there is a good reason not to. Like C, C++ is designed to do that by default. 

	Also, please don't make statements about performance without measurements. I have seen a case where changing a zero-to-two-element list to a zero-to-two-element vector made a factor-of-two difference to an algorithm. I didn't expect that. Nor did other experts looking at the code. 


	 Is Java the language you would have designed if you didn't have to be compatible with C?
	 No. Java isn't even close. If people insist on comparing C++ and Java - as they seem to do - I suggest they read  The Design and Evolution of C++ (D&E) to see why C++ is the way it is, and consider both languages in the light of the design criteria I set for C++. Those criteria will obviously differ from the criteria of Sun's Java team. Despite the syntactic similarities, C++ and Java are very different languages. In many ways, Java seems closer to Smalltalk than to C++. 
	 Much of the relative simplicity of Java is - like for most new languages - partly an illusion and partly a function of its incompleteness. As time passes, Java will grow significantly in size and complexity. It will double or triple in size and grow implementation-dependent extensions or libraries. That is the way every commercially successful language has developed. Just look at any language you consider successful on a large scale. I know of no exceptions, and there are good reasons for this phenomenon. [I wrote this before 2000; now (2012), the language part of the Java 7 specification is slightly longer in terms of number of pages than the ISO C++11 language specification.] 

	 I have commented (negatively) about Java hype and ascribed much of Java's success to marketing. For example, see my HOPL-3 paper. Today (2010), the claims made about Java are more reality based and less gratuitously derogative about alternatives. This was not always so. For example, compare the original 1995 Java white paper with the versions you find on the web (sometimes labelled "the original Java whitepaper"); page 69 would be a good place to start. 

	 Java isn't platform independent; it is a platform. Like Windows, it is a proprietary commercial platform. That is, you can write programs for Windows/Intel or Java/JVM, and in each case you are writing code for a platform owned by a single corporation and tweaked for the commercial benefit of that corporation. It has been pointed out that you can write programs in any language for the JVM and associated operating systems facilities. However, the JVM, etc., are heavily biased in favor of Java. It is nowhere near being a general reasonably language-neutral VM/OS. 

	 Personally, I'll stick to reasonably portable C++ for most of the kind of work I think most about and use a variety of languages for the rest. 




	  What do you think of C#?
	  I have no comments on C# as a language. It will take a lot to persuade me that the world needs yet another proprietary language. It will be especially hard to persuade me that it needs a language that is closely integrated with a specific proprietary operating system. 
	  If you want to write exclusively for the .Net platform, C# isn't the worst alternative, but remember that C++ is a strongly supported - though less strongly hyped - alternative on that platform. 




	   What do you think of C++/CLI?
	   C++/CLI is a set of extensions to ISO C++ that provides an extremely complete "binding" of C++ to Microsoft's CLI (Common Language Infrastructure). It has been standardized by ECMA (ECMA-372). I am happy that it makes every feature of the CLI easily accessible from C++ and happy that C++/CLI is a far better language than its predecessor "Managed C++". However, I am less happy that C++/CLI achieves its goals by essentially augmenting C++ with a separate language feature for each feature of CLI (interfaces, properties, generics, pointers, inheritance, enumerations, and much, much more). This will be a major source of confusion (whatever anyone does or says). The wealth of new language facilities in C++/CLI compared to ISO Standard C++ tempts programmers to write non-portable code that (often invisibly) become intimately tied to Microsoft Windows. 
	   The CLI provides a set of interfaces (to system facilities) that are very different from traditional interfaces to operating system facilities and applications. In particular, these interfaces have semantics that cannot be completely or conveniently expressed in conventional programming languages. One way of describing CLI is as a (partial) "platform" or "virtual machine". It consists of a large set of language features (inheritance, methods, loop constructs, callback mechanisms, etc.), supporting a large set of foundation libraries (the BCL), plus an elaborate system of metadata. The CLI is sometimes described as "language neutral". However, a language that doesn't accept a large subset of these facilities cannot use even basic .Net facilities (or future Microsoft Windows facilities, assuming that Microsoft's plans don't change) and a language that cannot express all of these features cannot be used for the implementation of resources meant to be usable by other languages. Thus, CLI is "language neutral" only in the sense that every language must support all of the CLI features to be "first-class" on .Net. 

	   I prefer a binding to be a few primitives, expressible as simple function calls and simple data structures in any language, possibly encapsulated in language-specific libraries. For the CLI, this can at best be done for consumers of CLI facilities only. A language used to produce CLI modules must be able to express all of the CLI facilities, including the metadata. Only a language that can do that can be considered a systems programming language on .Net. Thus, the Microsoft C++ team concluded that only build-in language facilities are acceptable to their customers. Their design reflects a view that accepts absolutely no restrictions on what part of CLI can be expressed in C++ with the C++/CLI extensions, absolutely no verbosity compared to other languages when using CLI facilities, and absolutely no overheads compared to other languages. They aim at preserving C++ as the dominant systems programming language for Windows. 

	   As ever, I place a heavy emphasis on portability and recommend people to design applications so that access to system-specific facilities are through well-defined interfaces specified in ISO C++ (e.g., not to use C++/CLI directly). On Windows, this will sometimes be inconvenient compared with using C++/CLI facilities directly, but it's the only way to gain portability and a degree of vendor independence. Obviously, that arms-length approach to the CLI cannot be maintained if the purpose of a piece of code is to provide a CLI interface to be consumed by other code. Please note that I recognize the need for system-specific extensions and that Microsoft is not the only C++ vendor with such extensions, I just strongly prefer to deal with such extensions through a "thin interface" specified in ISO standard C++. 

	   How to deal with system-specific extensions is inherently a difficult question. The Microsoft C++ team, especially Herb Sutter, has kept up an active dialog with (other) members of the ISO C++ standards committee so that the relationship between ISO C++ and its superset C++/CLI will eventually be worked out. We have a long record of constructive joint work in the ISO C++ committee. Also, to minimize confusion between ISO C++ and the C++/CLI extensions, Microsoft is now revising their Visual C++ documentation to try to clearly distinguish C++/CLI from ISO C++ (plain unqualified C++ means ISO C++). I hope others will follow that lead. 

	   On the difficult and controversial question of what the CLI binding/extensions to C++ is to be called, I prefer C++/CLI as a shorthand for "The CLI extensions to ISO C++". Keeping C++ as part of the name reminds people what is the base language and will help keep C++ a proper subset of C++ with the C++/CLI extensions. The C/C++ compatibility problems demonstrate how important it is to keep that subset property. 

	   Here are some documents related to C++/CLI: 
	   • The ECMA C++/CLI standard. 
	   • The UK ISO C++ panel's objection (incl. some code examples). 
	   • ECMA's answer to the UK (and other) objections. 
	   • Herb Sutter's design rationale for C++/CLI 




	    Why are you so keen on portability?
		Successful software is long-lived; life-spans of decades are not uncommon. A good application/program often outlives the hardware it was designed for, the operating system it was written for, the data base system it initially used, etc. Often, a good piece of software outlives the companies that supplied the basic technologies used to build it. 
		Often a successful application/program have customers/users who prefer a variety of platforms. The set of desirable platforms change as the user population changes. Being tied to a single platform or single vendor, limits the application/program's potential use. 

		Obviously, complete platform independence is incompatible with the ability to use all platform specific facilities. However, you can often approximate platform independence for an application by accessing platform facilities through a "thin interface" representing the application's view of its environment as a library. 




		 Do you really recommend Ada over C++ for larger projects?
		 No. I have no idea who started that rumor, but it must have been an over-enthusiastic or malicious Ada devotee. 



		  Would you compare C++ to "some language"?
		  No, sorry, I won't. You can find the reason in the introductory notes of The Design and Evolution of C++: 
		  "Several reviewers asked me to compare C++ to other languages. This I have decided against doing. Thereby, I have reaffirmed a long-standing and strongly held view: Language comparisons are rarely meaningful and even less often fair. A good comparison of major programming languages requires more effort than most people are willing to spend, experience in a wide range of application areas, a rigid maintenance of a detached and impartial point of view, and a sense of fairness. I do not have the time, and as the designer of C++, my impartiality would never be fully credible. 

		  I also worry about a phenomenon I have repeatedly observed in honest attempts at language comparisons. The authors try hard to be impartial, but are hopelessly biased by focusing on a single application, a single style of programming, or a single culture among programmers. Worse, when one language is significantly better known than others, a subtle shift in perspective occurs: Flaws in the well-known language are deemed minor and simple workarounds are presented, whereas similar flaws in other languages are deemed fundamental. Often, the workarounds commonly used in the less-well-known languages are simply unknown to the people doing the comparison or deemed unsatisfactory because they would be unworkable in the more familiar language. 

		  Similarly, information about the well-known language tends to be completely up-to-date, whereas for the less-known language, the authors rely on several-year-old information. For languages that are worth comparing, a comparison of language X as defined three years ago vs. language Y as it appears in the latest experimental implementation is neither fair nor informative. Thus, I restrict my comments about languages other than C++ to generalities and to very specific comments." 

		  That said, I consider C++ the best choice in programming language for a wide variety of people and applications. 




		   Others do compare their languages to C++; doesn't that annoy you?
		   It does when it is done incompetently or for commercial gain. The most widely circulated comparisons tend to be those written by proponents of some language, Z, to prove that Z is better that other languages. Given its wide use, C++ is often top of the list of languages that the proponents of Z wants to prove inferior. Often, such papers are "published" or distributed by a company that sells Z as part of a marketing campaign. Surprisingly, many seem to take an unreviewed paper written by people working for a company selling Z "proving" that Z is best seriously. One problem is that there are always grains of truth in such comparisons. After all, no language is better than every other in all possible ways. C++ certainly isn't perfect, but selective truth can be most seductive and occasionally completely misleading. 
		   When looking at a language comparison consider who wrote it, consider carefully if the descriptions are factual and fair, and also if the comparison criteria are themselves fair for all languages considered. This is not easy. 




		    You won't compare C++ to other languages, but you write diatribes about C++?
			I don't write diatribes (that's a hostile characterization of some text), but I do consider it reasonable - possibly even a duty - for someone who designed a language to explain its virtues and defend it against hostile characterizations. See my publications list. In paticular, see my extensive and peer reviewed papers for the ACM History of Programming Conference: •B. Stroustrup: A History of C++: 1979-1991. ACM HOPL-ii. 1993. 
			•B. Stroustrup: Evolving a language in and for the real world: C++ 1991-2006. ACM HOPL-III. 2007. 
			Often, I also point out the limitations of C++ and the fundamental assumptions of the design of C++ (for example, see D&E). 



			 C is better than C++ for small projects, right?
			 Not in my opinion. I never saw a project for which C was better than C++ for any reason but the lack of a good C++ compiler. 



			  Is C a subset of C++?
			  In the strict mathematical sense, C isn't a subset of C++. There are programs that are valid C but not valid C++ and even a few ways of writing code that has a different meaning in C and C++. However, C++ supports every programming technique supported by C. Every C program can be written in essentially the same way in C++ with the same run-time and space efficiency. It is not uncommon to be able to convert tens of thousands of lines of ANSI C to C-style C++ in a few hours. Thus, C++ is as much a superset of ANSI C as ANSI C is a superset of K&R C and much as ISO C++ is a superset of C++ as it existed in 1985. 
			  Well written C tends to be legal C++ also. For example, every example in Kernighan & Ritchie: "The C Programming Language (2nd Edition)" is also a C++ program. 

			  Examples of C/C++ compatibility problems: 
			  	int main()
		{
					double sq2 = sqrt(2);   /* Not C++: call undeclared function */
							int s = sizeof('a');    /* silent difference: 1 in C++ sizeof(int) in C */
								}

Calling an undeclared function is poor style in C and illegal in C++. So is passing arguments to a function using a declaration that doesn't list argument types: 	void f();	/* argument types not mentioned */

	void g()
		{
					f(2);	/* poor style C. Not C++ */
						}

In C, a void* can be implicitly converted to any pointer type, and free-store allocation is typically done using malloc() which has no way of checking if "enough" memory is requested: 	void* malloc(size_t);

	void f(int n)
		{
					int* p = malloc(n*sizeof(char));  /* not C++. In C++, allocate using `new' */
							char c;
									void* pv = &c;
											int* pi = pv;   /* implicit conversion of void* to int*. Not in C++ */
												}

Note the potential alignment error caused by the implicit conversion of the void* to a int*. See the C++ alternative to void* and malloc(). 
When converting from C to C++, beware that C++ has more keywords than C: 
	int class = 2;    /* ok in C. Syntax error in C++ */
		int virtual = 3;  /* ok in C. Syntax error in C++ */

		Except for a few examples such as the ones shown above (and listed in detail in the C++ standard and in Appendix B of The C++ Programming Language (3rd Edition)), C++ is a superset of C. (Appendix B is available for downloading). 
		Please note that "C" in the paragraphs above refers to Classic C and C89. C++ is not a descendant of C99; C++ and C99 are siblings. C99 introduces several novel opportunities for C/C++ incompatibilities. 




		What is the difference between C and C++?

		 C++ is a direct descendant of C that retains almost all of C as a subset. C++ provides stronger type checking than C and directly supports a wider range of programming styles than C. C++ is "a better C" in the sense that it supports the styles of programming done using C with better type checking and more notational support (without loss of efficiency). In the same sense, ANSI C is a better C than K&R C. In addition, C++ supports data abstraction, object-oriented programming, and generic programming (see my books). 

		 I have never seen a program that could be expressed better in C than in C++ (and I don't think such a program could exist - every construct in C has an obvious C++ equivalent). However, there still exist a few environments where the support for C++ is so weak that there is an advantage to using C instead. There aren't all that many of those left, though; see my (incomplete) compilers list. 

		 For a discussion of the design of C++ including a discussion of its relationship with C see The Design and Evolution of C++. 

		 Please note that "C" in the paragraphs above refers to Classic C and C89. C++ is not a descendant of C99; C++ and C99 are siblings. C99 introduces several novel opportunities for C/C++ incompatibilities. Here is a description of the differences between C++98 and C99. 




		  Do you really think that C and C++ could be merged into a single language?
		  I think that it would be a very good thing for the C/C++ community if they were. That is, if the C/C++ incompatibilities were systematically and completely eliminated and that future evolution was organized so as to prevent new incompatibilities from emerging. Whether that's possible is another matter. 
		  My basic point is that the current C/C++ incompatibilities are "accidents of history" that have no fundamental reasons behind them (though they all "looked like a good idea at the time" to some competent and well-meaning people). The C/C++ incompatibilities provide no benefits to the community at large, cause serious problems to a large section of the C/C++ community, and could - with great difficulty - be eliminated. 

		  For a far more detailed presentation of my views on C/C++ compatibility, see the series of papers I wrote about this: 
		  • B. Stroustrup: C and C++: Case Studies in Compatibility. The C/C++ Users Journal. September 2002. Pdf version. 
		  • B. Stroustrup: C and C++: A Case for Compatibility. The C/C++ Users Journal. August 2002. Pdf version. 
		  • B. Stroustrup: C and C++: Siblings. The C/C++ Users Journal. July 2002. Pdf version. 
		  • B. Stroustrup: Sibling rivalry: C and C++. AT&T Labs - Research Technical Report. TD-54MQZY. January 2002. 
		  I imagine that if incompatibilities were eliminated (by making changes to both C and C++), there would still be entities called C and C++, but then C really would be defined as a subset of C++. 
		  Please note that these papers were written in late 2001 and early 2002 when it was still possible to imagine coordinated action by the C and C++ standards committees leading to practical results by the end of the decade. This didn't happen. 




		   Why did you make C++ (almost) compatible with C?
		   I wanted C++ to be compatible with a complete language with sufficient performance and flexibility for even the most demanding systems programming. I had a perfect dread of producing yet-another pretty language with unintentional limitations. See Section 2.7 of The Design and Evolution of C++ for historical details and read the articles in Do you really think ...? for a (retrospective) technical discussion of C/C++ compatibility issues. 
		   At the time, I considered C the best systems programming language available. That was not as obvious then (1979) as it later became, but I had experts such as Dennis Ritchie, Steve Johnson, Sandy Fraser, Greg Chesson, Doug McIlroy, and Brian Kernighan down the corridor from whom I could learn and get feedback. Without their help and advice, and without C, C++ would have been stillborn. 

		   Contrary to repeated rumors, I was never told that I had to use C; nor was I ever told not to use C. In fact, the first C++ manual grew from troff source of the C manual that Dennis gave me. Many new languages were designed at Bell labs; in "Research" at least, there were no rules enforcing language bigotry. 




		    What do you think of C/C++?
			No that's not really a question I often get. In that sense, it is the only "fake FAQ" in this FAQ. However, it ought to be a FAQ because people use "C/C++" as if it meant something specific and as if they knew what it meant, leading to much confusion and misery. People should ask "What is C/C++?" and then on reflection stop using the term. It does harm. 
			There is no language called "C/C++". The phrase is usually used by people who don't have a clue about programming (e.g. HR personnel and poor managers). Alternatively, it's used by people who simple do not know C++ (and often not C either). When used by programmers, it typically indicates a "C++ is C with a few useful and a lot of useless complicated features added" attitude. Often, that is the point of view of people who like to write their own strings and hash tables with little knowledge of the standard library beyond printf and memcpy. There are people who stick to a restricted subset of C++ for perfectly good reasons, but they (as far as I have noticed) are not the people who say "C/C++". 

			I use C/C++ only in phrases such as "C/C++ compatibility" and "C/C++ community". 




			 When was C++ invented?
			 I started work on what became C++ in 1979. The initial version was called "C with Classes". The first version of C++ was used internally in AT&T in August 1983. The name "C++" was used late that year. The first commercial implementation was released October 1985 at the same time as the publication of the 1st edition of The C++ Programming Language. Templates and exception handling were included later in the 1980's and documented in The Annotated C++ Reference Manual and The C++ Programming Language (2rd Edition). The first ISO C++ standard was C++98 as described in The C++ Programming Language (3rd Edition). 
			 The current definition of C++ The 2011 ISO C++ Standard described in The C++ Programming Language (4th Edition). 

			 You can find a more complete timeline and more detailed explanations in The Design and Evolution of C++ and A History of C++: 1979-1991 and Evolving a language in and for the real world: C++ 19. 




			  Why did you invent C++?
			  I wanted to write efficient systems programs in the styles encouraged by Simula67. To do that, I added facilities for better type checking, data abstraction, and object-oriented programming to C. The more general aim was to design a language in which I could write programs that were both efficient and elegant. Many languages force you to choose between those two alternatives. 
			  The specific tasks that caused me to start designing and implementing C++ (initially called "C with Classes") had to do with distributing operating system facilities across a network. 

			  You can find more detailed explanations in The Design and Evolution of C++. See also A History of C++: 1979-1991 and Evolving a language in and for the real world: C++ 1991-2006. 




			   Why did AT&T support the development of C++?
			   When I first developed C++, AT&T built systems of greater complexity and with greater reliability requirements than most organizations. Consequently, we had to influence the market and help set standards that meet our needs - or else we wouldn't have the tools to build our systems. Left to itself "the industry" will create languages and tools for dealing with "average" problems. Similarly, teachers tend to focus on languages and tools that serve students and researchers well - even if they don't scale to the most demanding tasks. 
			   At the time when I developed C++ - and before that when Ken Thompson and Dennis Ritchie developed Unix and C - AT&T was probably the worlds largest civilian user of (and consumer of) software tools. Then, we probably used a wider range of systems - from the tiniest embedded processors to the largest supercomputers and data-processing systems. That put a premium on systems that were applicable in many technical cultures and on many platforms. C and C++ were designed with such demands in mind. 

			   Thus generality is essential, and proprietary features are seen as limiting the choice of platforms and vendors. As a consequence AT&T was and is a major supporter of formal standards (for example, ISO C and ISO C++). 

			   Actually, AT&T made enough money on Cfront, my original C++ compiler, to pay for the development of C++ several times over. 




			    Do you own C++?
				No. If anyone "owns C++," it must be the ISO. AT&T gave the rights to the C++ manual that I wrote to the ISO. The ISO C++ Standard is copyrighted by ISO. 
				Compiler vendors do not pay royalties to me or to AT&T for C++, and ISO standards are specifications intended for royalty-free use by everyone (once they have paid the ISO or a national standard committee for their copy of the standard). The individual compilers are owned by their respective vendors/suppliers. 

				"But someone from SCO claimed that they own C++"; is that not so? It's complete rubbish. I saw that interview. The SCO guy clearly had no clue what C++ was, referring to it as "the C++ languages". At most, SCO may own a 15-year old and seriously outdated version of Cfront - my original C++ compiler. I was careful not to patent or trademark anything to do with C++. That's one reason we write plain "C++" and not "C++(tm)". The C++ standard is unencumbered of patents - the committee carefully checked that also. 




				 Where did the name "C++" come from?
				 Chapter 3 of D&E: ``I picked C++ because it was short, had nice interpretations, and wasn't of the form "adjective C."' In C, ++ can, depending on context, be read as "next," "successor," or "increment," though it is always pronounced "plus plus." The name C++ and its runner up ++C are fertile sources for jokes and puns -- almost all of which were known and appreciated before the name was chosen. The name C++ was suggested by Rick Mascitti. It was first used in December of 1983 when it was edited into the final copies of [Stroustrup,1984] and [Stroustrup,1984c]. 
				 Chapter 1 of TC++PL: ``The name C++ (pronounced "see plus plus") was coined by Rick Mascitti in the summer of 1983. The name signifies the evolutionary nature of the changes from C; "++" is the C increment operator. The slightly shorter name "C+" is a syntax error; it has also been used as the name of an unrelated language. Connoisseurs of C semantics find C++ inferior to ++C. The language is not called D, because it is an extension of C, and it does not attempt to remedy problems by removing features. For yet another interpretation of the name C++, see the appendix of [Orwell,1949].'' 

				 The ``C'' in C++ has a long history. Naturally, it is the name of the language Dennis Ritchie designed. C's immediate ancestor was an interpreted descendant of BCPL called B designed by Ken Thompson. BCPL was designed and implemented by Martin Richards from Cambridge University while visiting MIT in the other Cambridge. BCPL in turn was Basic CPL, where CPL is the name of a rather large (for its time) and elegant programming language developed jointly by the universities of Cambridge and London. Before the London people joined the project "C" stood for Cambridge. Later, "C" officially stood for Combined. Unofficially, "C" stood for Christopher because Christopher Strachey was the main power behind CPL.'' 




				  Which language did you use to write C++?
				  The first C++ compiler (Cfront) was written in C++. To build that, I first used C to write a ``C with Classes''-to-C preprocessor. ``C with Classes'' was a C dialect that became the immediate ancestor to C++. That preprocessor translated "C with Classes" constructs (such as classes and constructors) into C. It was a traditional preprocessor that didn't understand all of the language, left most of the type checking for the C compiler to do, and translated individual constructs without complete knowledge. I then wrote the first version of Cfront in "C with Classes". 
				  Cfront was a traditional compiler that did complete syntax and semantic checking of the C++ source. For that, it had a complete parser, built symbol tables, and built a complete internal tree representation of each class, function, etc. It also did some source level optimization on its internal tree representation of C++ constructs before outputting C. The version that generated C, did not rely on C for any type checking. It simply used C as an assembler. The resulting code was uncompromisingly fast. For more information, see D&E. 




				  Did you really not understand what you were doing?
				  This one seems very popular. Or rather, it seems to be popular to assert that I had no clue so that C++'s success is some kind of accident. Yes, such statements annoy me, because they dismiss my work over decades and the hard work of many of my friends. 
				  Let's first be perfectly clear: No, I did not anticipate the run-away success of C++ and no, I did not forsee every technique used with C++ or every application of C++. Of course not! 

				  However, statements like these are very misleading: 
				  •Bjarne doesn't understand C++! 
				  •Bjarne didn't anticipate RAII and deterministic destruction! 
				  •Bjarne didn't anticipate template-metaprogramming! 

				  This FAQ was prompted by seeing these and several more of their ilk today. 

				  I did outline the criteria for the design and implementation of C++. I did explicitly aim for generality: "I'm not interested in a language that can only do what I can imagine" and for efficiency "a facility must not just be useful, it must be affordable." I suggest that doubters read The Design and Evolution of C++ and my HOPL2 and HOPL3 papers (these are peer-reviewed papers). As for deterministic destruction, it was in "C with Classes" in the first week or two (1979). I held back the introduction of exceptions into C++ for half a year until I discovered RAII (1988). RAII is an integral and necessary part of the C++ exception mehanism. 

				  I was very surprised when Jeremy Siek first showed my the compile-time if that later became std::conditional, but I had aimed for generalty (and gotten Turing completeness modulo translation limits). I opposed restrictions to C++ immediately when Erwin Unruh presented what is widly believed to be the first template metaprogram to the ISO Standards committee's evolution working group. To kill template-metaprogramming, all I would have had to do was to say nothing. Instead my comment was along the lines "Wow, that's neat! We mustn't compromise it. It might prove useful." Like all powerful ideas, template-metaprogramming can be misused and overused, but that does not imply that the fundamental idea of compile-time computation is bad. And like all powerfuls ideas, the implications and techniques emerged over time with contributions from many individuals. 

				  There is more to scolarship than a look at the wikipedia, a quick Google-search, and a couple of blog posts. There is more to invention than giving a simple list of implications. Fundamental principles and design guidelines are essential. My part of the C++ design opened the possibility for many to contribute, and if you look at my writings and posting, you see that I try hard to give credit (e.g., see the reference sections of my C++11 FAQ) or the history sections of my books. 

				  And no, I'm not a walking C++ dictionary. I do not keep every technical detail in my head at all times. If I did that, I would be a much poorer programmer. I do keep the main points straight in my head most of the time, and I do know where to find the details when I need them. For example: 
				  •TC++PL 
				  •the ISO C++ committee's home pages. 
				  •isocpp.org. 


				   Why doesn't C++ have garbage collection?
				   If you want automatic garbage collection, there are good commercial and public-domain garbage collectors for C++. For applications where garbage collection is suitable, C++ is an excellent garbage collected language with a performance that compares favorably with other garbage collected languages. See The C++ Programming Language for a discussion of automatic garbage collection in C++. See also, Hans-J. Boehm's site for C and C++ garbage collection. 
				   Also, C++ supports programming techniques that allows memory management to be safe and implicit without a garbage collector. I consider garbage collection a last choice and an imperfect way of handling for resource management. That does not mean that it is never useful, just hat there are better approaches in many situations. 

				   C++11 offers a GC ABI. 



				   I don't like garbage. I don't like littering. My ideal is to eliminate the need for a garbage colletor by not producting any garbage. That is now possible. Tools supporting and enforcing the programming techniques that achieves that are being produced. For an overview, see A brief introduction to C++'s model for type- and resource-safety.. 


				    Why doesn't C++ have a GUI?
					C++ has many commercial and open source GUIs (e.g. Gtkmm, SmartWin++, V C++ GUI, FLTK, and Qt). In particular, every platform vendor provides a C++ library to access their GUI. The problem is that it doesn't have a standard GUI, and that is indeed a major problem. 
					Note that providing a GUI is both a technical and political problem. There are lots of GUIs with lots of users, and generally they wouldn't like some other GUI to be declared standard. Anyway, the standards committee do not have the resources to build a new and better GUI. 




					 Why doesn't C++ support threads?
					 C++11 offers threads. 



					  Is C++ in decline?
					  No, I don't think so. C++ use appears to be declining in some areas and to be on an upswing in others. If I had to guess, I'd suspect a net decrease sometime during 2002-2004 and a net increase in 2005-2007 and again in 2010-2011, but I doubt anyone really knows. Most of the popular measures basically measures noise and ought to report their findings in decibel rather than "popularity." A professional survey in 2015 estimated the number of C++ programmers to be 4.4 million. Many of the major uses of C++ are in infrastructure (telecommunications, banking, embedded systems, etc.) where programmers don't go to conferences or describe their code in public. Many of the most interesting and important C++ applications are not noticed, they are not for sale to the public as programming products, and their implementation language is never mentioned. Examples are Google and "800" phone numbers. Had I thought of a "C++ inside" logo in 1985, the programming world might have been different today. 
					  One simple thing that confuses many discussions of language use/popularity is the distinction between relative and absolute measures. For example, I say (in 2011) that C++ use is growing when I see user population grow by 200,000 programmers from 3.1M to 3.3M. However, somebody else may claim that "C++ is dying" because it's "popularity" has dropped from 16 percent to 11 percent of the total number of programmers. Both claims could be simultaneously true as the number of programmers continues to grow and especially as what is considered to be programming continues to change. I think that C++ is more than holding its own in its traditional core domains, such as infrastructure, systems programming, embedded systems, and applications with serious time and/or space and/or power consumption constraints. See also my DevX interview. 




					   What's being done to improve C++?
					   Implementers are continually improving their compilers, libraries, and tools. The last five years have seen very significant improvements in quality. This is what most directly and most immediatly helps people; that, and the host of proprietary and open source libraries and tools that are continuously being produced by the C++ community. See my C++ page for examples. 
					   The first ISO C++ standard was ratified in 1998. The next version C++11, is complete and shipping. You can find papers describing C++11 on my publications page and all documents relating to the new standard on the ISO C++ committee's home pages. My HOPL-iii paper on the last 15 years of C++ evolution may the best explanation of what is being done and why. A recent interview contains lists of new language features and standard libraries. 

					   When considering the evolution of C++, it is worth remembering that the aim is not to add the largest number of new features, but to improve C++ for its key application domains, including systems programming and library building, without breaking older code (there are billions of lines of C++ "out there"). 




					    Why is the code generated for the "Hello world" program ten times larger for C++ than for C?
						It isn't on my machine, and it shouldn't be on yours. I have even seen the C++ version of the "hello world" program smaller than the C version. In 2004, I tested using gcc -O2 on a Unix and the two versions (iostreams and stdio) yielded identical sizes. There is no language reason why the one version should be larger than the other. It is all an issue on how an implementor organizes the standard libraries (e.g. static linking vs. dynamic linking, locale support by default vs. locale support enabled through and option, etc.). If one version is significantly larger than the other, report the problem to the implementor of the larger. 



						 How can a legacy language like C++ compete with modern, advanced languages?
						 Naturally, calling C++ a legacy language shows a bias (see legacy code). That aside, people are usually thinking of Java or C# when they ask such a question. I will not compare C++ to those languages, but I can point out that "modern" doesn't necessarily mean "better", and that both Java and C# are rooted in 1980s style OOP to an even greater extent than early C++ is. 
						 Since 1987 or so, the focus of development the C++ language and its associated programming styles have been the use of templates, static polymorphism, generic programming, and multiparadigm programming. This is way beyond the scope of the much-hyped proprietary languages. Another key difference is that C++ supports user-defined types to the same extent as built-in types. This - especially in combination with the use of templates, constructors, and destructors - enables the C++ programmer to use programming and design techniques that (IMO) are more advanced than what is supported in the languages with which C++ is most often compared; e.g. see RAII. 

						 Standard C++ and the design and programming styles it supports owe a debt to the functional languages, especially to ML. Early variants of ML's type deduction mechanisms were (together with much else) part of the inspiration of templates. Some of the more effective functional programming techniques were part of the inspiration of the STL and the use of function objects in C++. On the other hand, the functional community missed the boat with object-oriented programming, and few of the languages and tools from that community benefited from the maturing experience of large-scale industrial use. 

						 Clearly, I don't think that garbage collection is the sole defining characteristic of "advanced" in the context of programming languages. In particular, note that C++ provides support for effective and efficient memory management techniques that can eliminate resource leaks without the use of a garbage collector. If you disagree, you can just start using a garbage collector for C++; there are good ones available. 




						  What is "multiparadigm programming"?
						  Multiparadigm programming is a fancy way of saying ``programming using more than one programming style, each to its best effect.'' For example, using object-oriented programming when run-time resolution between different object types is required and generic programming when static type safety and run-time performance is at a premium. Naturally, the main strength of multiparadigm programming is in programs where more than one paradigm (programming style) is used, so that it would be hard to get the same effect by composing a system out of parts written in languages supporting different paradigms. I find the most compelling cases for multiparadigm programming are found where techniques from different paradigms are used in close collaboration to write code that is more elegant and more maintainable than would be possible within a single paradigm. A simple example is the traversal of a statically typed container of objects of a polymorphic type: 	void draw_all(vector<Shape*>& vs)	// draw each element of a standard vector
						  	{
										for_each(vs.begin(),vs.end(),[](Shape* p){ p->draw(); });
											}

Here, Shape will be an abstract base class defining the interface to a hierarchy of geometric shapes. This example easily generalizes to any standard library container: 	template<class C>
	void draw_all(C& cs)	// draw each element of a standard container
		{
					for_each(cs.begin(),cs.end(),[](Shape* p){ p->draw(); });
						}


Jim Coplien's book "Multiparadigm Design for C++" (Addison Wesley, 1998) explores the use of multiple paradigms in the context of design and design methods. 

We need a better -- more descriptive -- term to replace ``multi-paradigm.'' 


 Why is C++ so BIG?
 C++ isn't as big as some people imagine. It's not a tiny language designed to be a minimal language for teaching, but neither are the languages people most often compare it to, such as C, Java, C#. They too are huge compared to say, Pascal as Dr. Wirth originally defined it - for good reasons, I think. The programming world is far more complex today than it was 30 years ago, and modern programming languages reflect that. 
 The C++ standard is 1151 pages; that includes 430 pages of language definition and 770 pages of standard-library description. The size of the language definition is within 5% of the language descriptions of Java and C# (measured by page count). Similarly, TC++PL is 1360 pages; of those 750 of those are devoted to language facilities and programming techniques; the rest discuss libraries, etc. 

 C++ directly supports (i.e., in the language) what some other languages support through libraries, so the language part will be relatively larger. On the other hand, if you want to write a "typical modern application", you need to consider operating system interfaces, GUI, databases, web interfaces, etc. the sum of language features, libraries, and programming conventions and standards that you must become familiar with dwarf the programming language. Here, C++'s size can be an advantage as far as it better supports good libraries. 

 Finally, the days where a novice programmer can know all of a language are gone, at least for the languages in widespread industrial use. Few people know "all of C" or "all of Java" either and none of those are novices. It follows that nobody should have to apologize for the fact that novices do not know all of C++. What you must do - in any language - is to pick a subset, get working writing code, and gradually learn more of the language, its libraries, and its tools. For my suggestion on how beginners can approach C++, see Programming: Principles and Practice using C++. 




  What do you think of EC++?
  EC++ is an (almost) subset of C++ lacking exceptions, templates, namespaces, RTTI support, multiple inheritance, etc. being defined by an "industry consortium." I am not in favor of language subsets or dialects. I am especially not fond of subsets that cannot support the standard library so that the users of that subset must invent their own incompatible foundation libraries. I fear that a defined subset of C++ could split the user community and cause acrimony (3/31/1999: I just saw an advertisement that used vivid graphics to indicate how EC++ reduced "fat" (i.e. memory space) by abolishing - among other things - namespaces, templates, and C++ standard strings. Sigh!). I strongly prefer work on "standards" to occur in an open forum (such as ISO or a national standards organization). 
  For a discussion of how embedded systems implementers can address performance issues using Standard C++ (better than by using dialects) see the ISO C++ committee's report on performance. To the best of my knowledge EC++ is dead (2004), and if it isn't it ought to be. 

  For a look at how ISO C++ can be used for serious embedded systems programming, see the JSF air vehicle C++ coding standards. 




   C++ got its Object-Oriented concepts from Smalltalk?
   No. C++ got the key notions of classes, derived classes, virtual functions (in other words, the notions of encapsulation, inheritance and polymorphism) from Simula just like Smalltalk did. In terms of family relationships, C++ and Smalltalk are siblings. 



    Is C++ an Object-Oriented language?
	C++ is a multi-paradigm programming language that supports Object-Oriented and other useful styles of programming. If what you are looking for is something that forces you to do things in exactly one way, C++ isn't it. There is no one right way to write every program - and even if there were there would be no way of forcing programmers to use it. 
	That said, writing C-style programs in C++ is for most applications not an optimal use of C++. To be a really effective C++ programmer, you must use the abstraction mechanisms and the type system in a way that fits reasonably with their intent. Trying to ignore or defeat the C++ type system is a most frustrating experience. 

	Writing Java-style code in C++ can be as frustrating and sub-optimal as writing C-style code in C++. 

	For a more detailed discussion see any of my overview or style papers from my bibliography. In particular, see my OOPSLA paper "Why C++ isn't just an Object-Oriented Programming Language". 




	 Did you really say that?
	 "C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do it blows your whole leg off". Yes, I said something like that (in 1986 or so). What people tend to miss, is that what I said there about C++ is to a varying extent true for all powerful languages. As you protect people from simple dangers, they get themselves into new and less obvious problems. Someone who avoids the simple problems may simply be heading for a not-so-simple one. One problem with very supporting and protective environments is that the hard problems may be discovered too late or be too hard to remedy once discovered. Also, a rare problem is harder to find than a frequent one because you don't suspect it. 
	 "Within C++, there is a much smaller and cleaner language struggling to get out". Yes, that quote can be found on page 207 of The Design and Evolution of C++. And no, that smaller and cleaner language is not Java or C#. The quote occurs in a section entitled "Beyond Files and Syntax". I was pointing out that the C++ semantics is much cleaner than its syntax. I was thinking of programming styles, libraries and programming environments that emphasized the cleaner and more effective practices over archaic uses focused on the low-level aspects of C. 

	 "I have always wished for my computer to be as easy to use as my telephone; my wish has come true because I can no longer figure out how to use my telephone". I said that after a frustrating attempt to use a "feature-rich" telephone sometime around 1990. I'm sure the sentiment wasn't original, and probably not even the overall phrasing; someone must have thought of that before me. 

	 "There are only two kinds of languages: the ones people complain about and the ones nobody uses". Yes. Again, I very much doubt that the sentiment is original. Of course, all "there are only two" quotes have to be taken with a grain of salt. 

	 "Proof by analogy is fraud". Yes; page 692 of TC++PL. A good analogy is an excellent way of illustrating an idea, but far too often such analogies are not accompanied by solid reasoning, data, etc. 

	 "People who think they know everything really annoy those of us who know we don't". Yes. 

	 "C++ Is my favorite garbage collected language because it generates so little garbage". Yes; see Why doesn't C++ have garbage collection? and How do I deal with memory leaks. 

	 "If you think it's simple, then you have misunderstood the problem". Yes, but no, I don't recall which question elicited that answer. 

	 "There are more useful systems developed in languages deemed awful than in languages praised for being beautiful--many more". Yes, in MIT Technology Review interview and elsewhere. There, I also said: 
	 • "I think we should look for elegance in the applications built, rather than in the languages themselves". I should have said "more than" rather than "rather than". 
	 • "To use C++ well, you have to understand design and programming technique". 
	 • "C++ is designed to allow you to express ideas, but if you don't have ideas or don't have any clue about how to express them, C++ doesn't offer much help". 

	 Far too often, "computer science" is a form of math envy. Yes, but please don't forget that "Far too often." The quote comes from a context where I'm worrying about insufficient attention to data (empiricism) and insufficient attention to the connection to computing. It is not a frontal assault on the notion that computer science can be science (e.g., see Knuth on algorithms and the analysis of algorithms; that's science and it is not any other science). And, no, I'm not going to give concrete examples or names. 

	 Far too often, "software engineering" is neither engineering nor about software. Yes, but please don't forget that "Far too often." The quote comes from a context where I'm worrying about insufficient attention to data (empiricism) and insufficient attention to the connection to code. I'm worried that the realities of having to deliver useful and maintainable code can be drowned in processes, corporate standards, and marketing studies; that software development sometimes is controlled by people who couldn't recognize good code if it jumped up and punched them on the nose, and are proud of that. And, no, I'm not going to give concrete examples or names. When practiced well, software development is a worthy engineering discipline, delivering results that compares well with those of older engineering disciplines. 

	 When (not if) automatic garbage collection becomes part of C++, it will be optional. Yes in a a 2000 interview with /.. 

	 It's easy to win forgiveness for being wrong; being right is what gets you into real trouble. Yes. 

	 Any problem in computer science can be solved with another layer of indirection, known as the 1st law of computing. The full quote is Any problem in computer science can be solved with another layer of indirection, except of course for the problem of too many indirections. Yes, I said that quoting (my PhD Thesis advisor) David J. Wheeler. Please don't misattribute it to me. 

	 I have yet to see a program that can be written better in C than in C++. Yes, many times, including my electronic design interview. I don't believe such a program could exist. By ``better'' I mean smaller, more efficient, or more maintainable. If nothing else, you can write the program in C style benefiting from C++'s stronger type checking and better notational support, but most programs can benefit from C++'s support for generic and object-oriented programming without compromising size or performance. Sticking to the C-like subset of C++ is most often counter-productive. 

	 Test early and often. Yes, often, including Chapter 22 of Programming: Principles and Practice using C++. 

	 Space is time. Yes, referring to the fact that compact data is faster to traverse than scattered data (e.g., a traversing a vector can be dramatically faster than traversing a linked list) and faster to input and output. 




	  Did you really give an interview to IEEE?
	  in which you confessed that C++ was deliberately created as an awful language for writing unmaintainable code to increase programmers' salaries? 
	  Of course not. Read the real IEEE interview. 




	   What is "legacy code"?
	   "Legacy code" is a term often used derogatorily to characterize code that is written in a language or style that (1) the speaker/writer consider outdated and/or (2) is competing with something sold/promoted by the speaker/writer. "Legacy code" often differs from its suggested alternative by actually working and scaling. 



	    Is the number of C++ users still doubling every year?
		No. During 1980-1991, the number of users doubled every seven and a half months (see  The Design and Evolution of C++). However, there simply aren't enough programmers to sustain that. From the few numbers I can get (compiler sales, book sales, workloads of consultants I happen to know, IDC, etc.), I estimate that the growth rate is a few percent. Steady and definitely positive. IDC estimated that 1.2 million C++ Implementations were sold in 1996. Their 2001 estimate of the number of C++ programmers was "about 3 million"; their 2004 number was "more than 3 million". A 2015 professional survey found 4.4 million C++ programmers. That seems plausible and indicates a continued growth. 



		 Does anyone use C++ these days?
		 Yes, many do. There are too many C++ users to effectively count them, but the number is in the millions. C++ is supported by all major vendors. For examples of C++ use see my  application sampler. 



		  Why isn't C++ used for Operating Systems?
		  It is, and it has been for over a decade; see my list of C++ applications. A recent example is Cloudius. 



		   Did you expect C++ to become such a success?
		   Of course not. The success rate for general-purpose programming languages is vanishingly small. I knew that, and I knew that the chance of success was affected by marketing clout, which I did not have. 
		   C++ was initially designed and implemented as a set of general facilities addressing some specific problems that I and my colleagues faced. The generality - and efficiency - of the facilities provided turned out to serve much wider needs than I had anticipated. The emphasis on general facilities - as opposed to the provision of specific solutions to specific problems - has remained with C++ and has served its community well as the specific problems facing the community have changed over the years. 




		    What's a good certification for C++ programmers?
			To the best of my knowledge, there isn't a good certification program for C++ programmers. That's a pity. A good certification program would be most useful. However, C++ lacks the central organization that would produce a solid certification program, and a certification program without authority or that focused on syntax would be worse than useless. 



			Why did you go to work at Morgan Stanley?
			I felt it was time to get back to industry. I missed the challenges from real-world, large-scale projects with real consequences in case of success and failure. Academia was beginning to feel a bit cushy and ``Ivory tower'' to me (that is not the way academia is for younger faculty and adjunct faculty -- those need and deserve far more support than they get). Morgan Stanley's technology division has a huge range of computer science challenges, and a lot of clever, well-educated, and surprisingly (given the popuar reputation of people working for ``Wall Street'') nice people. Morgan Stanley has a lot of serious C++ use. In addition, I look after C++ standardization (C++17 is on its way) and do some research in my capacity of professor at Columbia University and Texas A&M University. It was time to get back to the North-East and to my family there. 
			PS. I work for Morgan Stanley, not J.P. Morgan. Morgan Stanley is a fairly heavily-regulated bank, rather than a generic ``financial institution,'' and IMO one of the most ethically-run financial institutions. 

			PPS. You simply cannot run a modern society without banks. 




			Why did you go to work at Texas A&M University?
			The steam had run out of Bell Labs and its successors, AT&T Labs and Lucent Bell Labs. It just wasn't what it used to be. I had (and have) friends at TAMU and thought it a good place to learn the various skills of academic life. For starters, academic research is rather different from industrial research that I had been used to. Smilarly, teaching freshmen and graduates is very different from teaching professionals. I also helped build up the Computer Science and Engineering Department. I am still associated with TAMU as a Distinguished Research Professor. 
			PS. Texas A&M University != University of Texas. 




			Why did you go to work at Bell labs?
			Because I could. In the 1980s (and years before and after that), there was no place on earth like it. There still isn't. Bell Labs was the premier applied science and engineering research center in the world. It was a most exciting and challenging place to work, with extraordinary colleagues. I was part of the Computer Science Research Center. I left AT&T Labs (one of the two successors to AT&T Bell Labs) on good terms, and was associated with AT&T as an AT&T Fellow for another decade. 



			What are you working on now?
			A better FAQ :-) 
			Seriously, I'm looking for fundamental ways of improving the tools and techniques we use to build large real-world systems. One part of my work is C++11. 




			 What is C++?
			 C++ is a general-purpose programming language with a bias towards systems programming that •is a better C 
			 •supports data abstraction 
			 •supports object-oriented programming 
			 •supports generic programming 
			 It is defined by an ISO standard, offers stability over decades, and has a large and lively user community. See also The C++ Programming Language and Evolving a language in and for the real world: C++ 1991-2006. 



			  Where can I learn about the background of C++?
			  About the design of C++? About the history of C++? 
			  Look at my papers for HOPL-2 and HOPL-3; HOPL stands for "History Of Programming Languages", the premier conference on that subject, sponsored by the ACM. These are heavily peer-reviewed papers. For even more information see my book The Design and Evolution of C++ and the Preface to the 2006 Japanese translation of D&E which brings the information up to 2006. Also, many of my interviews touch upon the issues of background, design, and history of C++. 




			   Is it true that ...?
			   Many questions come to me in the form of assertions •C++ is low-level(?) 
	•C++ is too slow for low-level work(?) 
	•C++ is useful only if you write truly object-oriented code(?) 
	•Modern C++ is all generic programming and template metaprogramming(?) 
	•C++ is designed by Microsoft(?) 
	Often, the person bringing up one of these points considers the statement a fact (but none of these assertions are true); sometimes, there is an implied question mark. So, •C++ is low-level? No. C++ offers both low-level and high-level features. C++ has low-level parts, such as pointers, arrays, and casts. These facilities are (almost identical to what C offers) are essential (in some form or other) for close-to-the-hardware work. So, if you want low-level language facilities, yes C++ provides a well-tried set of facilities for you. However, when you don't want to use low-level features, you don't need to use the C++ facilities (directly). Instead, you can rely on higher-level facilities, including libraries. For example, if you don't want to use arrays and pointers, standard library strings and containers are (better) alternatives in many cases. If you use only low-level facilities, you are almost certainly wasting time and complicating maintenance without performance advantages (see  Learning Standard C++ as a New Language). You may also be laying your systems open to attacks (e.g. buffer overflows). 
	•C++ too slow for low-level work? No. If you can afford to use C, you can afford to use C++, even the higher-level facilities of C++ where you need their functionality. See Abstraction and the C++ machine model and the ISO C++ standards committee's Technical Report on Performance. 
	•C++ is useful only if you write truly object-oriented code? No. That is, "no" for just about any reasonable definition of "object-oriented". C++ provides support for a wide variety of needs, not just for one style or for one kind of application. In fact, compared to C, C++ provides more support for very simple programming tasks. For example, the standard library and other libraries radically simplifies many otherwise tedious and error-prone tasks. C++ is widely used for huge applications but it also provides benefits for even tiny programming tasks. 
	•Modern C++ is all generic programming and template metaprogramming? No. C++ supports several useful programming techniques, including, traditional procedural programming, object-oriented programming, and generic programming. None of these is better than all others for all uses and typically the most effective solution to a real-world problem involves a combination of techniques. 
	•C++ is designed by Microsoft? No. I originally designed and implemented C++ and together with the ISO C++ standards committee refined its definition. Microsoft has taken an active and largely positive role in this standardization - as has Apple, GNU, IBM, Sun, and many others. Like others - e.g. Apple - Microsoft tries to help/lock-in their users with proprietary extensions, (in particular, Microsoft C++/CLI). 




	 What do you think of Boost?
	 Boost is a large and expanding collection of libraries designed to work well with the ISO C++ standard library. It contains many extremely useful and well-engineered libraries, such as asio, filesystem, regex, and thread (apologies for not trying to identify more useful libraries; there are just too many). One library, TR1, contains a good approximation of new C++11 standard library components. 
	 The Boost libraries have tests suites, have documentation, have been tested on multiple systems, and are peer reviewed. 

	 I have two problems with Boost, though, which I hope will be dealt with eventually: 
	 •It is too hard to download and use just one Boost library; the libraries seem overly coupled making it hard to pick and choose. 
	 •Some of the libraries are too clever for my taste. Sometimes, generality and simplicity coincide; in Boost, the balance is IMO too often so far towards generality that novices and average users are lost. 
	 That said, it is usually a really dumb idea to go and reinvent a wheel that boost already offers. 



	  What do you think of template metaprogramming?
	  Template metaprogramming is a set of powerful programming techniques, which when used with care and taste can help solve quite tricky problems, mostly relating to the architecture of larger systems, their portability, and their maintenance (see Abrahams and Gurtovoy: C++ Template Metaprogramming and some of the Boost libraries. 
			  Like all powerful techniques they are easily overused. Personally, I tend to use templates primarily for generic programming (e.g., defining containers and algorithms over containers) and for templates that generate fairly obvious code based on template arguments (e.g., generating buffers and register access code); that's sometimes called generative programming. Be careful about the complexity of the templates you write or use; it is easy to get overenthusiastic and write template code that is too clever to be useful as maintainable production code. 

			  If you do not like functional programming styles, you might find template metaprograms hard to understand. If you do like functional programming, you may find the template version a bit primitive, but remember these templates are executed at compile-time. 

