import java.io* // -> I've got to do this, essentially adding Java back in to the Java wrapper. From the Processing documentation, I don't believe this makes this program entirely Java - it should just be Processing but looking for Java commmands if the command doesn't exist in Processing.

void sendData() {
    try { //if there's an error, doing this in try { } catch (Exception e) { }, from my understanding, is error handling so I don't break something significant if something breaks.
      Process pb = new ProcessBuilder("Absolute/Path/To/a.out").start(); // -> This starts the program at the end of the path - it behaves as an absolute path on Linux, simply being in the same directory is a little tricky.
      //pb.redirectErrorStream(true); // -> this is, from my understanding, what catches interrupts and the like - if "./a.out" doesn't behave or hits a interrupt/error condition, this is what catches it, commented out because it wasn't functional
      //Process proc = pb.start(); // -> completely redundant, from an earlier attempt where I defined pb and started it separately
     
      OutputStream os = pb.getOutputStream(); // -> this sets the processing program's output stream (where writer.println(stuff); prints out to) to the ProcessBuilder program's input stream (essentially)
      InputStream is = pb.getInputStream(); // -> this sets the Processing program's input stream to the pb's output stream

// Of note, I think that Process pb = new ProcessBuilder creates the I/O stream, and the above is to make sure that the Processing program understands those streams exist.

     BufferedReader reader = new BufferedReader(new InputStreamReader(is));  // this is a really cool piece of Processing functionality. It does something similar to std::getLine() in c++, reading lines in any input stream until (from my understanding) it hits a "/n" or newline character (essentially, treating "/n" or newlines as the delimiter)
     // so the cool part of this C++ program is that the output is just "strings" - that is, essentially a dynamically allocated array of (I believe ASCII) characters, and every message ends with a "/n" or newline character. I can use BufferedReader to read the output of my program, line by line, as it's close enough to the same data stream. It'd be a lot more complicated if I, say, applied formatting, but (from my understanding), BufferedReader is designed for raw ASCII (or Unicode) text, which is what my program outputs.
      PrintWriter writer = new PrintWriter(os); //this is also cool -> it lets me push chars to any output stream (in this case, the result of ./a.out, but it can also use files, terminals, any stream that'll play nice with chars).
       
        int num = 2; // this is just making a number to try something
        writer.println(num); // this is telling the program to push "num" to the output stream -> a mistake I made was not pushing a endline character afer num.
        writer.flush(); // this, from my understanding, basically makes sure everything gets from Processing into the output stream, "flushing" the pipe, if you will. This is not using .close() because I want the output stream to be open, but I want to make sure everything in it gets pushed every time. I need to try this program out and make sure it works before I determine if .flush() is actually right for me.
       
        String line;
        while ((line = reader.readLine()) != null) { //take everything that C++ says, one line at a time, and push it to variable line. Then, tell me what's in line.
          println("C++ says: " + line);
        }
       
       //the below is all at least a little redundant, it was me trying to push 2 to the C++ output file twice. My program successfully got the cout statements and stored them in line, but, (I believe) due to the lack of a /n character, the output was given to C++ but never finished "cin" (that is, cin never finished).
        writer.println(num); 
        writer.flush();
        pb.waitFor();

        //below is a little error handling.
    } catch (Exception e) {
        e.printStackTrace();
    }
}