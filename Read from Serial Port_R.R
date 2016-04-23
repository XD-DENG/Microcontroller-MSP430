
# Specify the port
p <- "/dev/tty.uart-92FF512FD5873D48"

while(TRUE) {
  f <- file(p, open="r")

  # If read from the port too frequently, it's quite likely we will get emtpy information
  # so here we pause for 0.01 sec after each connection to the file
  Sys.sleep(0.03)
  print(scan(f, n=1, quiet = TRUE))

  close(f)

}




