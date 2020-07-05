package example.Extends;

import java.util.Date;

public class GeometricObject1 {
    private String color = "white";
    private boolean filled;
    private Date dateCreated;

    public GeometricObject1(){
        dateCreated = new Date();
    }
    public GeometricObject1(String color , boolean filled){
        dateCreated = new Date();
        this.color = color;
        this.filled = filled;
    }

    public String getColor(){
        return color;
    }

    public void setColor(String color){
        this.color = color;
    }

    public boolean isFilled(){
        return filled;
    }
 
     public void setFilled(boolean filled){
        this.filled = filled;
    }
    public Date getDataCreated(){//获得时间
        return dateCreated;
    }
    public String toString(){
        return "Created on "+dateCreated+"\ncolor: "+color + " and filled: "+filled;
    }
}