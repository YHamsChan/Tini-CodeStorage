class HelloWorld {
    public static void main(String[] args) {
        int Total = 0;
        String[] Temen = {
            "Teman A", "Teman C",};
        int JumlahTeman = Temen.length;
        
        for (int i=20; i<115; i++) {
            int Extract_i = Total+1;
            System.out.println("["+Extract_i+"] Teman Favorit:");
            for (int ii= 0;ii<=JumlahTeman-1;ii++){
                int Extract_ii = ii+1;
                System.out.println(">>["+Extract_ii+"]"+Temen[ii]);
            }
            Total = Total+1;
        }
       System.out.println("Total Eksekusi: "+Total);
    }
}
